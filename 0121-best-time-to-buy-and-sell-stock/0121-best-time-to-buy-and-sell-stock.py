class Solution:
    def maxProfit(self, prices):
        buy_day, sell_day = 0, 1 # left and right pointer
        maxP = 0
        
        while sell_day < len(prices):
            # Profitable?
            if prices[buy_day] < prices[sell_day]:
                profit = prices[sell_day] - prices[buy_day]
                maxP = max(maxP, profit)
            else:
                buy_day = sell_day
            sell_day += 1

        return maxP
