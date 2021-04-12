#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rem=0;
    int num = 0;
    while(n!=0){
        rem = n%10;
        n=n/10;
        num = num*10+rem;
    }
    return num;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int l = log10(n);
        cout<<reverse(n)<<endl;
    }
    return 0;
}