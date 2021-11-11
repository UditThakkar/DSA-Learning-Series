// que link : https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1/


void MyQueue:: push(int x)
{
        // Your Code
        if (rear==NULL)
        {
            rear= new QueueNode(x);
            front = rear;
        }
       //adding the new node at the end of queue and changing rear.
       else
       {
            QueueNode *temp = new QueueNode(x);
            rear->next =temp;
            rear = temp;
        }
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code  
        QueueNode* temp = front;
        if(temp == NULL){
            return -1;
        }
        if(temp->next !=NULL){
            temp = temp->next;
            int k = front->data;
            delete(front);
            front = temp;
            return k;
        }
        else{
            int k = front->data;
            delete(front);
            front = rear = NULL;
            return k;
        }
        
        
}
