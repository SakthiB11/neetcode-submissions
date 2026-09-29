class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0],totalprofit = 0;

        for (int i = 0; i < prices.size(); i ++)
        {
            buy = min(buy, prices[i]);
            int profit = prices[i] - buy;
            totalprofit = max(profit, totalprofit);
        }

        return totalprofit;
    }
};
