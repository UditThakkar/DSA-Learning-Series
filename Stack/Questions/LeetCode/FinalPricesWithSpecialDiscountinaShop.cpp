// que link : https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    int diff= prices[i]-prices[j];
                    ans.push_back(diff);
                    break;
                }
                else{
                    if(j==prices.size()-1){
                        ans.push_back(prices[i]);
                    }
                    continue;
                }
            }
            if(i==prices.size()-1){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};
