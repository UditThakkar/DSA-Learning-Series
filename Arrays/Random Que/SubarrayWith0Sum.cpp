class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        int curr = 0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            if(curr==0) return true;
            else{
                // int sum = -1
                if(mp.find(curr)!=mp.end()){
                    return true;
                }
                else{
                    mp[curr] = i;
                }
            }
        }
        return false;
    }
};
