class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
        vector<int> next(n+1,0), cur(n+1,0);
//     return f(0,-1,arr,n,dp);
        for(int ind = n-1;ind>=0;ind--){
            for(int prev = ind-1;prev>=-1;prev--){
                int len = 0 + next[prev+1];
                if(prev==-1 or arr[ind]>arr[prev]){
                    len = max(len,1+next[ind+1]);
                }
                cur[prev+1] = len;
            }
            next = cur;
        }
        return next[-1+1];
    }
};
