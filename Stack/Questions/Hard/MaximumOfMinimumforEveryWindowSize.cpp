// que link: https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1/

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        stack<int> s;
        int left[n+1];
        int right[n+1];
        
        for(int i=0;i<n;i++){
            left[i]=-1;
            right[i] = n;
        }
        
        for(int i=0;i<n;i++){
            while(s.empty()==false && arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(s.empty()==false)
                left[i] = s.top();
            s.push(i);
        }
        while(s.empty()==false){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
            
            if(s.empty()==false)
                right[i] = s.top();
            s.push(i);
        }
        int ans[n+1];
        for(int i=0;i<=n;i++){
            ans[i]=0;
        }
        for(int i=0;i<n;i++){
            int len = right[i] - left[i] - 1;
            ans[len] = max(ans[len],arr[i]);
        }
        for(int i=n-1;i>=1;i--){
            ans[i] = max(ans[i],ans[i+1]);
        }
        vector<int> res(n);
        for(int i=1;i<=n;i++){
            res[i-1] = ans[i];
        }
        return res;
    }
};
