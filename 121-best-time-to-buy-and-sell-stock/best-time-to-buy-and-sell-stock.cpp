class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0, minprice = INT_MAX;
        for(int i = 0;i<n;i++){
            if(prices[i] < minprice){
                minprice = prices[i];
            }else{
                profit = max(profit, prices[i]-minprice);
            }
        }
        return profit;
    }
};