//  que link: https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1/

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        unordered_set<char> h;
        for(int i=0;i<s.length();i++){
            h.insert(s[i]-'a');
        }
        if(h.size()!=s.length()){
            return false;
        }
        else{
            return true;
        }
    }
};
