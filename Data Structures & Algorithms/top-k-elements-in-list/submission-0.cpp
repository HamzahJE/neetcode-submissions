class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<pair<int,int>> arr;
        vector<int> soln;
        for (int num : nums){
            count[num]++;
        }
        for (auto& [k,v]: count){
            arr.push_back({v,k});
        }
        sort(arr.rbegin(),arr.rend());
        for (int i{0};i<k;i++){
             soln.push_back(arr[i].second);
        }
        return soln;
    }
};
