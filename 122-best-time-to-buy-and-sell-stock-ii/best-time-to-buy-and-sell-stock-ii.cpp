// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//     }
// };

 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i-1]) {
                max_profit += prices[i] - prices[i-1];
            }
        }
        return max_profit;
    }
};





// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int min_price = prices[0];
//         int maxprof = 0;

//         for(int i=1;i<prices.size();i++){
//             maxprof = max(maxprof,prices[i]-min_price);
//             min_price = min(prices[i],min_price);
//         }

//         return maxprof;
//     }
// };