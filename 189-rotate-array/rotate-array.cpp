class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size(); //To check if k is not greater thn array.
        //thn
        reverse(nums.begin() , nums.end());
        //full array reverse kia
        reverse(nums.begin(), nums.begin()+k);
        //k tak reverse kia..
        reverse(nums.begin()+k, nums.end());
        //k k bad (n-k) end tk reverse kia..
        
    }
};