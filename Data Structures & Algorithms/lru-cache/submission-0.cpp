class LRUCache {
    class Node{
        public:
         int key;
        int data;
        Node* next;
        Node* prev;

        Node(int k, int d) {
        key = k;
        data = d;
        next = NULL;
        prev = NULL;
    }

    };
public:
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    unordered_map<int,Node*> m;
    int limit;
    void addnode(Node* newnode){
        Node* oldnext = head->next;
        head->next = newnode;
        oldnext->prev = newnode;
        newnode->next = oldnext;
        newnode->prev = head;
    }
    void delnode(Node* oldnode)
    {
        Node* oldprev = oldnode->prev;
        Node* oldnext = oldnode->next;
        oldprev->next = oldnext;
        oldnext->prev = oldprev;
    }
    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
        int ans = m[key]->data;
        Node* ansnode = m[key];
        m.erase(key);
        delnode(ansnode);
        addnode(ansnode);
        m[key]=ansnode;
        return ans;
    }
    
    void put(int key, int value) {
         if(m.find(key)!=m.end())
        {
            Node* oldnode = m[key];
            delnode(oldnode);
            m.erase(key);
        }
        if(m.size()==limit){
            m.erase(tail->prev->key);
            delnode(tail->prev);
        }
        Node* newnode = new Node(key,value);
        addnode(newnode);
        m[key]=newnode;
    }
};
