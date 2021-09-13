// que link: https://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate-1587115621/1/
class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string ans;
        unordered_map<int,int> m;
        for(int i=0;i<s2.size();i++){
            m[s2[i]]=1;
        }
        for(int i=0;i<s1.size();i++){
            if(m.find(s1[i])!=m.end()){
                m[s1[i]]=2;
            }
            else{
                ans+=s1[i];
            }
        }
        for(int i=0;i<s2.length();i++){
            if(m[s2[i]]==1){
                ans+=s2[i];
            }
        }
        if(ans==""){
            ans= "-1";
        }
        return ans;
    }

};
