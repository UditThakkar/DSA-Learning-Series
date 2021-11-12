//  que link : https://leetcode.com/problems/build-an-array-with-stack-operations/


class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j=0,i=1;
        while(i<=n && j<target.size()){
            if(j<target.size() && target[j]==i){
                ans.push_back("Push");
                j++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            i++;
        } 
        return ans;
    }
};
