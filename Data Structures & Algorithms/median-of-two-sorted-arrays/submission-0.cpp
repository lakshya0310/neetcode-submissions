class Solution {
public:
    double getKth(vector<int>& a, int m, vector<int>& b,int n,int k ,int astart,int bstart ){
        if(m>n) return getKth(b,n,a,m,k,bstart,astart);
        if(m==0) return b[bstart+k-1];
        if(k==1) return min(a[astart],b[bstart]);

        int i = min(m,k/2);
        int j = min(n,k/2);

        if(a[astart+i-1]>b[bstart+j-1]) return getKth(a,m,b,n-j,k-j,astart,bstart+j);
        else return getKth(a,m-i,b,n,k-i,astart+i,bstart);
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int left = (nums1.size() + nums2.size() + 1)/2;
        int right = (nums1.size()+nums2.size() +2)/2;
        return (getKth(nums1, nums1.size(), nums2, nums2.size(), left, 0, 0) + getKth(nums1, nums1.size(), nums2, nums2.size(), right, 0, 0)) / 2.0;
    }
};
