class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minimumNow=prices[0];
        
        for(int i=0;i<prices.size();i++){
            minimumNow = min(minimumNow,prices[i]);
            int profit = prices[i]-minimumNow;
            maxprofit= max(maxprofit,profit);
        }
        return maxprofit;
    }
};