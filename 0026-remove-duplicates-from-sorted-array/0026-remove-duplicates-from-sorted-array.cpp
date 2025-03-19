class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=1;
        while(j<n){
            if(nums[j]==nums[i-1]){
                j++;
            }else{
                nums[i++]=nums[j];
            }
        }
        return i;
    }
};