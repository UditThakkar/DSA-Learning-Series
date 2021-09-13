// que link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        int start=0;
        for(int end=0;end<s.length();end++){
            if(s[end]=='.'){
                reverse(s.begin()+start,s.begin()+end);
                start = end+1;
            }
        }
        reverse(s.begin()+start,s.end());
        reverse(s.begin(),s.end());
        return s;
    } 
};
