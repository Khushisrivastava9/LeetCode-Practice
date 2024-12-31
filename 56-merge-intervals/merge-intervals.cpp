class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int startidx=intervals[0][0];
        int endidx=intervals[0][1];
        for(int i=0;i<n;i++){
            if(intervals[i][0]>endidx){
                ans.push_back({startidx,endidx});
                startidx=intervals[i][0];
                endidx=intervals[i][1];
            }else{
                endidx=max(endidx,intervals[i][1]);
            }
        }
        ans.push_back({startidx,endidx});
        return ans;
    }
};