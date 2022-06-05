// que link: https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1#

class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string s, string t, int n, int m)
    {
        //code here
        vector<vector<int>> dp(n + 1,vector<int>(m + 1, 0));
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int len = dp[n][m];
        int ans = n + m - len;
        return ans;
        // string ans = "";
        // int i = n;
        // int j = m;
        // while(i>0 and j>0){
        //     if(s[i-1]==t[j-1]){
        //         ans+=s[i-1];
        //         i--;
        //         j--;
        //     }
        //     else if(dp[i-1][j]>dp[i][j-1]){
        //         ans+=s[i-1];
        //         i--;
        //     }
        //     else{
        //         ans+=t[j-1];
        //         j--;
        //     }
        // }
        // while(i>0){
        //     ans+=s[i-1];
        //     i--;
        // }
        // while(j>0){
        //     ans+=t[j-1];
        //     j--;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
    }
};
