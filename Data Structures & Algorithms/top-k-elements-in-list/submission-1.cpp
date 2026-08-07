class Solution {
public:
       static bool cmp(const pair<int,int> &a,const pair<int,int> &b){
            return a.second < b.second;
        }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        vector<pair<int,int>> listOfPairs;
        for (int &num : nums){
            mp[num]++;
        }
        for (auto [n,c] :mp){
            listOfPairs.push_back({n,c});
        }

        sort(listOfPairs.begin(),listOfPairs.end(),cmp);
        vector<int> soln;
        int n = listOfPairs.size();
        for (int i=n-1; i>=n-k ;i--){
            soln.push_back(listOfPairs[i].first);
        }
        return soln;

    }
};

