class Solution {
public:
int fn(vector<int>& nums, int div){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=(nums[i]+div-1)/div;
    }
    return ans;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int sum=fn(nums,mid);
            if(sum>threshold){
                s=mid+1;
            }else{
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
};