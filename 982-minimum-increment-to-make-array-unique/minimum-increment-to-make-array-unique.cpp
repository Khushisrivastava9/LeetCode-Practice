class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n=nums.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                ans+=(nums[i-1]+1)-nums[i];
                nums[i]=nums[i-1]+1;

            }
        }
        return ans;

    }
};