class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n, 0);
        ans[n - 1] = prices[n - 1];

        for (int i = n - 2; i >= 0; i--){
            ans[i] = max(ans[i + 1], prices[i]);
        }

        int max_profit = 0;
        for (int i = 0; i < n - 1; i++){
            int buy = prices[i];
            int sell = ans[i + 1];
            max_profit = max(max_profit, sell - buy);
        }
        return max_profit;
    }
};