class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        vector<int> res(n,-1);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        for(int i=nums.size()-1;i>=n;i--){
            while (!st.empty() && nums[i] >= st.top()) {
                st.pop();
            }
            st.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while (!st.empty() && nums[i] >= st.top()) {
                st.pop();
            }
            if(!st.empty() && nums[i]<st.top()) res[i]=st.top();
            st.push(nums[i]);
        }
        return res;
    }
};