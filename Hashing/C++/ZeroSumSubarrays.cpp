//Link to prob:
//https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/0/?track=DSASP-Hashing&batchId=154

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
       unordered_map<int,int> s;
       s[0]=1;
       int pre_sum=0,count=0;
       for(int i = 0;i<n;i++){
           pre_sum+=arr[i];
           if(s.find(pre_sum)!=s.end()){
               count+=s[pre_sum]++;
           }
          else{
              s[pre_sum]++;
             }
       }
       return count;
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  
