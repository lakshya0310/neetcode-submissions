class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto c : tokens ){
            if(c=="+"||c=="-"||c=="/"||c=="*"){
                int f = s.top();
                s.pop();
                int sec = s.top();
                s.pop();
                if(c=="+") s.push(f+sec);
                else if(c=="-") s.push(sec-f);
                else if(c=="/") s.push(sec/f);
                else s.push(sec*f);
            }
            else s.push(stoi(c));
            

        }
        return s.top();
    }
};
