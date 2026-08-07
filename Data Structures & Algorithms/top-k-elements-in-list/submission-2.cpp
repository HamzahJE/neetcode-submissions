#include <algorithm>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> soln;
    unordered_map<int,int> count;
    for (int num : nums){
        count[num]++; // num:freq
    }
    vector<pair<int,int>> arr;
    for (auto &[k,v] : count){
        arr.push_back({v,k}); //freq:num
    }
    sort(arr.rbegin(),arr.rend());
    for (int i=0;i<k;++i){
      soln.push_back(arr[i].second);
    }
    return soln;
    }
};
