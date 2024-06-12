class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt0++;
            else if(nums[i]==1) cnt1++;
        }
        int k=0;
        while(cnt0--){
            nums[k++]=0;

        }
        while(cnt1--){
            nums[k++]=1;
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=2;
        }
    }
};