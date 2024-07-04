class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int s=1;
        int e=1e9;
        int ans=1;
        while(s<=e){
            int sum=0;
            int mid=s+(e-s)/2;
            for(int i=0;i<n;i++){
                int div=(nums[i]+mid-1)/mid;
                sum+=div;
            }
            if(sum<=threshold){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};