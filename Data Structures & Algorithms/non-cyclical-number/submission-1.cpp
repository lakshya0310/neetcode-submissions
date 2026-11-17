class Solution {
public:
    int sq(int num){
        int ans = 0 ;
        for(int i = num ; i>0;i=i/10){
            int dig = i % 10;
            ans += dig*dig;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = n ;
        int fast = sq(n);
        while(slow!=fast){
            slow = sq(slow);
            fast = sq(sq(fast));
        }
        if(fast==1) return true;
        else return false;
    }
};
