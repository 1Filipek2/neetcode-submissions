class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if (prices.empty())
        {
            return 0;
        }

        int max_profit = 0;
        int min_price = prices.front();

        for (const int price : prices)
        {
            if (price < min_price)
            {
                min_price = price;
            }
            else
            {
                max_profit = std::max(max_profit, price - min_price);
            }
        }

        return max_profit;
    }
};