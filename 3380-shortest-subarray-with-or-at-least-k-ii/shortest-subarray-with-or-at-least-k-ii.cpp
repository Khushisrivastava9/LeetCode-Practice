class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0, j=0;
        int cur=0, ans=n+1;
        vector<int>bitcnt(32,0);
        while(i<=j && j<n){
            cur|=nums[j];
            for(int bitno=0; bitno<32; bitno++){
                if(nums[j] & (1<<bitno)){
                    bitcnt[31-bitno]++;
                }
            }
            while(i<=j && cur>=k){
                ans=min(ans, j-i+1);
                for(int bitno=0; bitno<32; bitno++){
                    if(nums[i] & (1<<bitno)){
                        bitcnt[31-bitno]--;
                    }
                }
                i++;
                int newcur=0;
                for(int bitno=31; bitno>=0; bitno--){
                    if(bitcnt[bitno]){
                        newcur+=pow(2,31-bitno);
                    }
                }
                cur=newcur;
            }
            j++;    
        }
        if(ans==n+1) return -1;
        return ans;
    }
};