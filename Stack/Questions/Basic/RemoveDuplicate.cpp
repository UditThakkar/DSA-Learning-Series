// que link : https://practice.geeksforgeeks.org/problems/removing-consecutive-duplicates-1587115621/1/

class Solution
{
    public:
    string removeConsecutiveDuplicates(string s)
    {
        string ans = "";
        stack<char> st;
        
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i]==st.top())
                continue;
            else{
                ans+=st.top();
                st.pop();
                st.push(s[i]);
            }
        }
        ans += st.top();
        return ans;
    }
};
