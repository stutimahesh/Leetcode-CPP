class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum= prices[0];
        int max_profit=0;

        for(int price: prices){
            int profit= price-minimum;

            minimum= min(price, minimum);
            max_profit= max(max_profit, profit);
        }

        return max_profit;
    }
};