class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;

        int minBuy = prices[0];
        int maxProfit = 0;

        for (const int &sell : prices) {
            maxProfit = max(maxProfit, sell - minBuy);
            minBuy = min(minBuy, sell);
        }

        return maxProfit;
    }
};
