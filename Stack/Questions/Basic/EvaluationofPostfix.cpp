// que link : https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }
            else{
                int val1 = st.top(); st.pop();
                int val2 = st.top(); st.pop();
                
                switch(s[i]){
                    case '+': st.push(val2+val1); break;
                    case '-': st.push(val2-val1); break;
                    case '*': st.push(val2*val1); break;
                    case '/': st.push(val2/val1); break;
                }
            }
        }
        return st.top();
    }
};
