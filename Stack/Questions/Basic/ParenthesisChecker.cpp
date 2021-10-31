// que link : https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1/

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool matching(char a,char b){
        return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
    }
    
    bool ispar(string str)
    {
        // Your code here
        stack<int> s;
        for (int i = 0; i < str.length(); i++)  
        { 
            if (str[i] == '(' || str[i] == '[' || str[i] == '{')  
            {  
                s.push(str[i]); 
            } 
            else{
            if (s.empty()==true) 
                return false;
            else if(matching(s.top(),str[i])==false)
                return false;
            else
                s.pop();
            }
        }    
        return (s.empty()==true); 
    }

};
