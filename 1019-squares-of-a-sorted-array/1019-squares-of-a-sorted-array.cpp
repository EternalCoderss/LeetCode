class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        //run loop for n and sqrt of nums[i]
        for(int i = 0; i < n; i++){
            nums[i] = nums[i]* nums[i];
        }
        //sort function for vector
        sort(nums.begin(), nums.end());
        return nums;
    }
};