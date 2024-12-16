class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            for(int i=0;i<nums.size();i++){
                int mini=*min_element(nums.begin(),nums.end());
                if(nums[i]==mini){
                    nums[i]=nums[i]*multiplier;
                    break;
                }
            }
        }
        return nums;

    }
};