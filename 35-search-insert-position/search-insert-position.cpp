class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        if(nums[n-1]<target) ans=n;
        return ans;
    }
};