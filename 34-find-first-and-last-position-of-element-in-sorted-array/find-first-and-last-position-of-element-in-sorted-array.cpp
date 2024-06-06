class Solution {
public:
int n;
int firstocc(vector<int> &nums,int target){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(nums[m]==target){
            ans=m;
            e=m-1;
        }else if(nums[m]>target){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}
int lastocc(vector<int> &nums,int target){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(nums[m]==target){
            ans=m;
            s=m+1;
        }else if(nums[m]>target){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        n=nums.size();
        int firsto=firstocc(nums,target);
        int lasto=lastocc(nums,target);
        return {firsto,lasto};
    }
};