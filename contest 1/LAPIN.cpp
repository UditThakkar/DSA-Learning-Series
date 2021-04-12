#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int i;
        int left[26]={0};
        int right[26]={0};
        int len = s.length();
        for(i=0;i<len/2;i++){
            int index = s[i] - 'a';
            left[index] +=1;
        }
        for(int i=(len+1)/2;i<len;i++){
            int index = s[i] - 'a';
            right[index] +=1;
        }
        int fail = 0;
        for(i=0;i<len;i++){
            if(left[i]!=right[i])
                fail = 1;
        }

        if(fail==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl; 
    }
    return 0;
}