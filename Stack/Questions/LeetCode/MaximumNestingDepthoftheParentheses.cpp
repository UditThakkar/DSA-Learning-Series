// que link : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        int depth = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                depth++;
                mx = max(depth,mx);
            }
            else if(s[i]==')'){
                depth--;
            }
        }
        return mx;
    }
};
