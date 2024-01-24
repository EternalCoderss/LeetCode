class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size(); //To check if k is not greater thn array.
        //thn
        reverse(nums.begin() , nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};