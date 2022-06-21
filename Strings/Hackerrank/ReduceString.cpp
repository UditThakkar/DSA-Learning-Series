string superReducedString(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty()==true or st.top()!=s[i]){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    string ans = "";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    if(ans.size()==0) return "Empty String";
    return ans;
}
