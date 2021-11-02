//  que link : https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1/

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int> s;
       s.push(0);
       vector<int> ans(n);
       ans[0]=1;
       for(int i=1;i<n;i++){
           while(s.empty()==false && price[s.top()]<=price[i]){
               s.pop();
           }
           int span = s.empty() ? i+1 : i-s.top();
           ans[i] = span;
           s.push(i);
       }
       return ans;
    }
};
