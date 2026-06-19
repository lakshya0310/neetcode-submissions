class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int  l = 0 ,r = height.size()-1;
        int lmax = 0,rmax = 0;
        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);

            ans+= lmax<rmax ? lmax-height[l++] : rmax-height[r--];

        }
        return ans;
    }
};
