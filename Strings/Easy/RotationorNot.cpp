// Check if strings are rotations of each other or not
//  que link: https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1/

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!=s2.length())return false;
        return ((s1+s1).find(s2)!=string::npos);
    }
};
