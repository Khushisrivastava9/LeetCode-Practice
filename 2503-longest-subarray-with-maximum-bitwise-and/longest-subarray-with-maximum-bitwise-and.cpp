class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_num = *max_element(nums.begin(), nums.end());
        int max_len = 0, current_len = 0;
        for (int num : nums) {
            if (num == max_num) {
                current_len++;
            } else {
                max_len = max(max_len, current_len); 
                current_len = 0; 
            }
        }
        return max(max_len, current_len);
    }
};