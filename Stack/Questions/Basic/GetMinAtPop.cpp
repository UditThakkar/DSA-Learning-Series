// que link: https://practice.geeksforgeeks.org/problems/get-min-at-pop/1/

stack<int> _push(int arr[],int n)
{
   // your code here
   
   stack<int> s;
   for(int i=0;i<n;i++){
       s.push(arr[i]);
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    vector<int> v;
    while(s.empty()==false){
        v.push_back(s.top());
        s.pop();
    }
    stack<int> min;
    s.push(v.back());
    min.push(v.back());
    
    for(int i=v.size()-2;i>=0;i--){
        s.push(v[i]);
        if(s.top()<min.top()) min.push(s.top());
        else min.push(min.top());
    }
    while(s.empty()==false){
        cout<<min.top()<<" ";
        s.pop();
        min.pop();
    }
}
