// que link: https://practice.geeksforgeeks.org/problems/keypad-typing0119/1/

string printNumber(string s, int n) 
{
    //code here
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='b' || s[i]=='c')
        {
            ans+='2';
        }
        if(s[i]=='d' || s[i]=='e' || s[i]=='f')
        {
            ans+='3';
        }
        if(s[i]=='g' || s[i]=='h' || s[i]=='i')
        {
            ans+='4';
        }
        if(s[i]=='j' || s[i]=='k' || s[i]=='l')
        {
            ans+='5';
        }
        if(s[i]=='m' || s[i]=='n' || s[i]=='o')
        {
            ans+='6';
        }
        if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s')
        {
            ans+='7';
        }
        if(s[i]=='t' || s[i]=='u' || s[i]=='v')
        {
            ans+='8';
        }
        if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z')
        {
            ans+='9';
        }
    }
    return ans;
}
