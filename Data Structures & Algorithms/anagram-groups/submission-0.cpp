class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(auto s : strs){
            vector<int> freq(26,0);
            for(char c : s) freq[c-'a']++;
            string key = to_string(freq[0]);
            for(int i = 1 ; i<26;i++){
                key += ','+to_string(freq[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto pair : res) result.push_back(pair.second);

        return result;
    }
};
