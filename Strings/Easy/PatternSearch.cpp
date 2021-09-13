//  que link: https://practice.geeksforgeeks.org/problems/distinct-pattern-search-1587115620/1/
class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	// Your code here
    	int m=pat.length();
        int n=txt.length();
        // bool ans = false;
        for(int i=0;i<=n-m;){
            int j=0;
            for(j=0;j<m;j++){
                if(pat[j]!=txt[i+j]){
                    break;
                }
            }
            if(j==m){
                return true;
            }
            if(j==0)
                i=i+1;
            else{
                i=i+j;
            }
        }
        return false;
    } 
};
