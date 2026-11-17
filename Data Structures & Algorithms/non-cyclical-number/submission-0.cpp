class Solution {
public:
    int sq(string num){
        int ans = 0 ;
        for(char ch : num){
            int dig = ch - '0';
            ans += dig*dig;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<string> steps;
        string num = to_string(n);
        while(!steps.contains(num)){
            steps.insert(num);
            if(sq(num)==1) return true;
            else num = to_string(sq(num));
        }
        return false;
    }
};
