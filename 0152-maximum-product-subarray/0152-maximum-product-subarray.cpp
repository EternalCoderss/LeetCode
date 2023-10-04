class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;  // Handle the case of an empty array
        }

        int maxProductEndingHere = nums[0];
        int minProductEndingHere = nums[0];
        int maxProductSoFar = nums[0];

        for (int i = 1; i < n; i++) {
            // Store the current value to avoid multiple calculations
            int currentNum = nums[i];

            // Update maxProductEndingHere and minProductEndingHere
            int tempMax = maxProductEndingHere;
            maxProductEndingHere = max({currentNum, currentNum * maxProductEndingHere, currentNum * minProductEndingHere});
            minProductEndingHere = min({currentNum, currentNum * tempMax, currentNum * minProductEndingHere});

            // Update maxProductSoFar with the maximum of maxProductSoFar and maxProductEndingHere
            maxProductSoFar = max(maxProductSoFar, maxProductEndingHere);
        }

        return maxProductSoFar;
    }
};
