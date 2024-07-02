class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto i:nums1){
            mp[i]++;
        }
        for(auto j:nums2){
            if(mp[j]){
                ans.push_back(j);
                mp[j]--;
            }
        }
        return ans;
    }
};