class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = 0;
        int res = r;
        for(auto b : piles){
            r = max(r,b);
        }
        int l = 1;
        while(l<=r){
            int k = l + (r-l)/2;
            long long t = 0;
            for(int p : piles){
                t += ceil((double)p /(double)k);
            }
            if(t<=h) {
                res = k;
                r = k-1;
            }
            else{
                l = k+1;
            }
        }
        return res;
    }
};
