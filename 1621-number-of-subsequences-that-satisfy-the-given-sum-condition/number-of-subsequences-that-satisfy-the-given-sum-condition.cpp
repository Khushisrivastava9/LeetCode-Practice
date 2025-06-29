class Solution {
public:
int mod=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       vector<int> powers(n,1);
       for(int i=1;i<n;i++){
        powers[i]=(powers[i-1]*2)%mod;
       }
       int l=0,r=n-1;
       int ans=0;
       while(l<=r){
        if(nums[l]+nums[r]<=target){
            ans=(ans+powers[r-l])%mod;
            l++;
        }
        else{
            r--;
        }
       }
       return ans;
       
    }
};