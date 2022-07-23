class Solution {
public:
    bool fun(string s, string t,int n,int m ){
        if(n==0) return true;
        if(m==0) return false;
        
        if(s[n-1]==t[m-1]){
            return fun(s,t,n-1,m-1);
        }
        return fun(s,t,n,m-1);
    }
    
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        return fun(s,t,n,m);
    }
};
