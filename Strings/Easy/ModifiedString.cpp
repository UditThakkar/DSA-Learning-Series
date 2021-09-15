// que link :https://practice.geeksforgeeks.org/problems/the-modified-string-1587115621/1

class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        int n=a.length();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1] && a[i+1]==a[i+2]){
                count++;
                i++;
            }
        }

        return count;
    }
};
