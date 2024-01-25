// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int profit = 0, minprice = INT_MAX;
//         for(int i = 0;i<n;i++){
//             if(prices[i] < minprice){
//                 minprice = prices[i];
//             }else{
//                 profit = max(profit, prices[i]-minprice);
//             }
//         }
//         return profit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }

        return maxprof;
    }
};