// que link :https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1/
// NAIVE SOLUTION
char nonrepeatingCharacter(string str)
{
   //Your code here
   for(int i=0;i<str.length();i++)
   {
        bool flag=false;
        for(int j=0;j<str.length();j++)
        {
            if(i!=j&&str[i]==str[j])            
            {
                flag=true;
                break;
            }
        }
        if(flag==false)return str[i];
    }
    return '$';
}

// BETTER SOLUTION
char nonRep(string &str) 
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]==1)return str[i];
    }
    return '$';
}

// EFFICIENT SOLUTION
int nonRep(string &str) 
{
    int fI[CHAR];
    fill(fI,fI+CHAR,-1);
    
    for(int i=0;i<str.length();i++){
        if(fI[str[i]]==-1)
        fI[str[i]]=i;
        else
        fI[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++){
        if(fI[i]>=0)res=min(res,fI[i]);
    }
    return (res==INT_MAX)?-1:res;
}
