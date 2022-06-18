class Solution {
public:
    int longestIncreasingSubsequence(int arr[], int n)
  {
      // Write Your Code here
          vector<int> dp(n,1),hash(n);
          int last = 0;
          int ans = 0;
          for(int i=0;i<n;i++){
              hash[i] = i;
              for(int prev = 0;prev < i;prev++){
                  if(arr[prev]<arr[i] and 1+dp[prev]>dp[i]){
                      dp[i] = dp[prev]+1;
                      hash[i] = prev;
                  }
              }
  //             ans = max(ans,dp[i]);
              if(dp[i]>ans){
                  ans = dp[i];
                  last = i;
              }
          }
          vector<int> lis;
              lis.push_back(arr[last]);
              while(hash[last]!=last){
                  last = hash[last];
                  lis.push_back(arr[last]);
              }
      reverse(lis.begin(),lis.end());
      for(int i=0;i<ans;i++) cout<<lis[i]<<" ";
      cout<<endl;
      return ans;

  }
};
