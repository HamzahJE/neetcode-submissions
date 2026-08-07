class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for (string &s: strs){
            vector<int> count(26,0);
            for (char c : s){
                count[c - 'a']++;
            } 
            mp[count].push_back(s);
        }
        vector<vector<string>> res;
        for(auto &kv : mp){
            res.push_back(kv.second);
        }        
        
        return res;  
    }
};
