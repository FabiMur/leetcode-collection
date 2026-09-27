class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_day = 0;
        int sell_day = 1;
        int maxP = 0;

        while(sell_day < prices.size()){
            // Profitable?
            if(prices[sell_day] > prices[buy_day]){
                int profit = prices[sell_day] - prices[buy_day];
                maxP = max(maxP, profit);
            // Buy at the lowest price found
            } else {
                buy_day = sell_day;
            }
            sell_day += 1;
        }
        return maxP;
    }
};