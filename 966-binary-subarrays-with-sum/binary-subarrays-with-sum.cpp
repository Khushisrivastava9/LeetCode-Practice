class Solution {
public:
int solve(vector<int>& nums, int goal){
    if(goal<0) return 0;
        int n=nums.size();
        int cnt=0;
        int sum=0;
        int i=0,j=0;
        while(j<n){
            sum+=nums[j];
            while(sum>goal && i<=j){
                sum-=nums[i];
                i++;
            }
            cnt=cnt+(j-i+1);
            j++; 
        }
        return cnt;
}
    int numSubarraysWithSum(vector<int>& nums, int goal){
        return solve(nums,goal)-solve(nums,goal-1);
        
    }
};