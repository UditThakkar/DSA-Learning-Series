// quetion link : https://practice.geeksforgeeks.org/problems/naive-pattern-search-1587115620/1/

class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	// Your code here
        int m=pat.length();
        int n=txt.length();
        bool ans=false;
        for(int i=0;i<=(n-m);i++){
            int j;
            for(j=0;j<m;j++){
                if(pat[j]!=txt[i+j])
                    break;
            }   
            if(j==m)
                ans=true;
        }
        return ans;
    	
    }
};