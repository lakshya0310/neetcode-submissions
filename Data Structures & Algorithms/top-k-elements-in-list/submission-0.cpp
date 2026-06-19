class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int , int> m;
        for(int i : nums) m[i]++;
        for(auto num : m){
            pq.push({num.second , num.first});
        }
        vector<int> ans;
        while(k--)
        {   int a = pq.top().second;
        pq.pop();
            ans.push_back(a);    
        }
        return ans;
    }
};
