// que link : https://practice.geeksforgeeks.org/problems/operations-on-queue/1/


class Solution{
    public:
    
    //Function to push an element in queue.
    void enqueue(queue<int> &q,int x)
    {
       //Your code here
       q.push(x);
    }
     
    //Function to remove front element from queue.
    void dequeue(queue<int> &q)
    {
        //Your code here
        q.pop();
    }
    
    //Function to find the front element of queue.
    int front(queue<int> &q)
    {
        //Your code here
        int ans = q.front();
        return ans;
    }
    
    //Function to find an element in the queue.
    string find(queue<int> q, int x)
    {
        //Your code here
        bool flag = false;
        while(!q.empty()){
            if(q.front()==x){
                flag = true;
            }
            q.pop();
        }
        if(flag){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
