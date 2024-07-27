class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        stack<int> st;
        unordered_map<int,int> mp;
        vector<int> res(n,-1);
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=i;
        }
        for(int i=nums2.size()-1;i>=0;i--){
            while (!st.empty() && nums2[i] > st.top()) {
                st.pop();
            }
            if(mp.find(nums2[i])!=mp.end()){
                if(!st.empty()){
                    res[mp[nums2[i]]]=st.top();
                }
            }
            st.push(nums2[i]);
        }
        return res;
    }
};