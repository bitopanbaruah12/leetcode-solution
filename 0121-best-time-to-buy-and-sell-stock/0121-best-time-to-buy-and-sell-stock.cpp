class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minsell=prices[0];

        for(int i=0;i<prices.size();i++){
            minsell=min(minsell,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minsell);
        }
        return maxprofit;
    }
};