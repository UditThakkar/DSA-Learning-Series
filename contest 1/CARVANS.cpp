#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[100000];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int count=1;
        for(i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                a[i+1] = a[i];
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;


    }
    return 0;
}