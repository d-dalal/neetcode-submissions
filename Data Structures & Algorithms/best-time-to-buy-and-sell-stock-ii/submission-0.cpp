class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=0;
        int profit=0;

        buy=prices[0];
        for(auto a: prices) {
            sell=a;
            if (sell-buy>0) {
                profit+=(sell-buy);
            }
            buy=sell;
        }
        return profit;
    }
};