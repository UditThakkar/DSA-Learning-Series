// que link: https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1/

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int count[26]={0};
        for(int i=0;i<patt.length();i++){
            patt[i]=tolower(patt[i]);
            count[patt[i]-'a']++;
        }
        for(int i=0;i<str.length();i++){
            if(count[str[i]-'a']>0){
                return i;
            }
        }
        return -1;
    }
};
