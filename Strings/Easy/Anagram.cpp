//  que link: https://practice.geeksforgeeks.org/problems/anagram-1587115620/1/

const int CHAR = 256;
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length()!=b.length()){
            return false;
        }
        int count[CHAR]={0};
        for(int i=0;i<a.length();i++){
            count[a[i]]++;
            count[b[i]]--;
        }
        for(int i=0;i<CHAR;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }

};
