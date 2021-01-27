class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = INT_MAX;
        int max_profit = 0;
        for(int i = 0; i < prices.size(); ++i){
            int price = prices[i];
            if(price < min_value)
               min_value = price;
            else if(price - min_value > max_profit)
                max_profit = price - min_value;
        }
        return max_profit;
    }
};
