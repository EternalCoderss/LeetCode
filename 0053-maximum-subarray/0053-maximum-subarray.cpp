class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentmax = 0;
        int overallmax = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            currentmax += nums[i];

            if( currentmax > overallmax){
                overallmax = currentmax;
            }
            if(currentmax < 0){
                currentmax = 0;
            }
        }
        return overallmax;
        
    }
};