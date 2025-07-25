class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> st;
        if(nums.size()==1) return nums[0];
        int ans=0;
        for(auto i:nums) st.insert(i);
        for(auto i:st){
            if(i>=0) ans+=i;
        }
        if(ans==0){
            set<int>::iterator it = st.end();
            --it;
            ans+=*it;
        }
        return ans;
    }
};