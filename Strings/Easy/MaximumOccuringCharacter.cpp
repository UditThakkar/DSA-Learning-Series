// que link:https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1/
const int c = 26;
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int count[c]={0};
        for(int i=0;i<str.length();i++){
            count[str[i]-'a']++;
        }
        int res = -1;
        char ans;
        for(int i=0;i<c;i++){
            if(count[i]>res){
                res = count[i];
                ans = (char)(i+'a');
            }
        }
        return ans;
    }

};
