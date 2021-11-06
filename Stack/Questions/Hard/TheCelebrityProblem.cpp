// que link : https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1/

// Naive Approach
// Time: O(n^2), Space: O(n)

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int in[n]={0};
        int out[n]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    in[j]++;
                    out[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(in[i]==n-1 && out[i]==0){
                return i;
            }
        }
        return -1;
    }
};

// Efficient 
// Time: O(n)

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int c = 0;
        for(int i=0;i<n;i++){
            if(M[c][i]==1){
                c=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=c and (M[c][i]==1 or M[i][c]==0)){
                return -1;
            }
        }
        return c;
    }
};
