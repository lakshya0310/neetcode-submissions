class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j)
        {
            if(!((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')||(s[i]<='9'&&s[i]>='0'))) {i++; continue;}
            if(!((s[j]<='z'&&s[j]>='a')||(s[j]<='Z'&&s[j]>='A')||(s[j]<='9'&&s[j]>='0'))) {j--; continue;}

            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
