class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        //nums   [ 1  , 2  , 3 , 4]
        //prefix [ 1  , 1  , 2 , 6]
        //suffix [ 12 , 12 , 6 , 1]
        vector<int> suffix(n); //right
        vector<int> prefix(n); //left
        vector<int> soln(n); //left

        prefix[0] = 1;
        suffix[n-1] = 1;
        for (int i=1;i<n;++i){
            prefix[i]=nums[i-1]*prefix[i-1];
        }
        for (int i=n-2;i>=0;--i){
            suffix[i]=nums[i+1]*suffix[i+1];
        }
        for (int i=0;i<n;++i){
            soln[i]=prefix[i]*suffix[i];
        }
        return soln;
    }
};
