class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        int maxi=0;
        for(auto &i:items){
            maxi=max(maxi,i[1]);
            i[1]=maxi;
        }
        vector<int> ans(queries.size(),0);
        map<int,int> mp;
        for(auto i:items){
            mp[i[0]]=i[1];
        }
        for(int i=0;i<queries.size();i++){
            auto it = mp.upper_bound(queries[i]);
            if (it != mp.begin()) {
                ans[i] = prev(it)->second;
            }
        }
        return ans;
    }
};