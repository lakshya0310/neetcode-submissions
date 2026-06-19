class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        int ans=0;
        for(int num : numset){
            if(numset.find(num-1)==numset.end()){
                int length = 1;
                while(numset.find(num+length) != numset.end()) length++;

                ans = max(ans,length);
            }
            
        }
        return ans;
    }
};
