// que link: https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1/

# Naive Solution 
## Time Complexity : O(n^2)

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long res = 0;
        for(int i=0;i<n;i++){
            long long curr = arr[i];
            for(int j=i-1;j>=0;j--){
                if(arr[j]>arr[i])
                {
                    curr+=arr[i];
                }
                else break;
            }
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i])
                {
                    curr+=arr[i];
                }
                else break;
            }
            res = max(curr,res);
        }
        return res;
    }
};


# Efficient solution
## Time : O(n)

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack <long long> s;
        long long res=0;
        long long tp;
        long long curr;
        
        for(long long i=0;i<n;i++){
            while(s.empty()==false && arr[s.top()]>=arr[i]){
                tp=s.top();s.pop();
                curr=arr[tp]* (s.empty() ? i : i - s.top() - 1);
                res=max(res,curr);
            }
            s.push(i);
        }
        while(s.empty()==false){
            tp=s.top();s.pop();
            curr=arr[tp]* (s.empty() ? n : n - s.top() - 1);
            res=max(res,curr);
        }
        
        return res;
    }
};
