class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp {};
    for (int i=0;i<nums.size();i++){
            int diff;
            diff=target-nums[i];
            if(mp.count(diff)) return vector<int>{mp.at(diff),i};
            mp.insert({nums[i],i});

        }
    }
};