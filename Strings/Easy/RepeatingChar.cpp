// que link : https://practice.geeksforgeeks.org/problems/repeating-character-first-appearance-leftmost/1/
// 2 TRAVERSAL SOLUTION
const int c = 256;
class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        //Your code here
        int count[c]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(count[s[i]]>1){
                return i;
            }
        }
        return -1;
        
    } 
};
// Efficient solutions
// 1 TRAVERSAL (EFFICIENT 1)
const int CHAR = 256;
class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string str) 
    { 
        //Your code here
        int fIndex[CHAR]={0};
        fill(fIndex,fIndex+CHAR,-1);
        int res=INT_MAX;
        for(int i=0;i<str.length();i++)
        {
            int fi=fIndex[str[i]];
            if(fi==-1)
            {
                fIndex[str[i]]=i;    
            }
            else
            {
                res=min(res,fi);
            }
        }
        
        return (res==INT_MAX)?-1:res;
        
    } 
};

// (EFFICIENT 1)
const int CHAR = 256;
class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string str) 
    { 
        //Your code here
        bool visited[Char];
        fill(visited,visited+CHAR,false);
        int res=-1;
        for(int i=str.length();i?=0){
            if(visited(str[i])    
                res=i;
            else
                visited[str[i]] = true;   
        }
        return res;
    } 
};
