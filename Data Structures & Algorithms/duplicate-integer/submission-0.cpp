class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums){
            if(m.find(num)==m.end()) m[num] = 1;
            else return true;
        }
        return false;
    }
};