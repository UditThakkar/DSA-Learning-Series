//  que link: https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1/

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        unordered_set<char> s;
        for(int i=0;i<str.size();i++){
            if('A' <= str[i] && str[i] <= 'Z'){
                s.insert(str[i]);
            }
            else if('a' <= str[i] && str[i] <= 'z'){
                s.insert(str[i]);
            }
        }
        if(s.size()==26) return true;
        else return false;
    }

};
