class Solution {
public:
//greedy approach
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int i=2;
        while(i<n){
            if(nums[i-2]!=1){
                cnt++;
                nums[i-2]=!nums[i-2];
                nums[i-1]=!nums[i-1];
                nums[i]=!nums[i];
            }
            i++;
        }
        for(auto i:nums){
            if(i==0) return  -1;
        }
        return cnt;
    }
};