#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int zeroes(ll n) {
    ll res = 0;
    if(n<5){
        return 0;
    }
    for(int i=5;i<=n;i=i*5){
        res = res + n/i;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<zeroes(n)<<endl;
    }
    return 0;
}