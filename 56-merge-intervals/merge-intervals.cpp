class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
       sort(begin(intervals),end(intervals));
       for(int i=0;i<n;i++){
        int startidx=intervals[i][0];
        int endidx=intervals[i][1];
        if(!ans.empty() && endidx<=ans.back()[1]) continue;
        for(int j=i+1;j<n;j++){
            if(intervals[j][0]<=endidx){
                endidx=max(endidx,intervals[j][1]);
            }
            else{
                break;
            }
        }  
        ans.push_back({startidx,endidx});
       } 
       return ans;
    }
};