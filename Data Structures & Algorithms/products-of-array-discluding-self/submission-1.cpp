class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> soln(n);
        vector<int> prefix(n);
        vector<int> suffix(n);
        //.   / / manual         - - starting point
    //nums:   [-1-,2,4,6]     [0,1,n-2,n-1]
    //prefix: [/1/,-1-,2,8]   [0,1,n-2,n-1]
    //suffix: [48,24,-6-,/1/] [0,1,n-2,n-1]
    //out:    [48,24,12,8]    [0,1,n-2,n-1]
    prefix[0]=1;
    suffix[n-1]=1;
    for (int i=1; i<n ; ++i){
        prefix[i]=(nums[i-1]*prefix[i-1]);
    }
    for (int i=n-2; i>=0 ; --i){
        suffix[i]=(nums[i+1]*suffix[i+1]);
    }
    for (int i=0; i<n ; ++i){
        soln[i]=(suffix[i]*prefix[i]);
    }
    return soln;
    }
};
