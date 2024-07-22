class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        priority_queue<pair<int,string>> pq;
        for(int i=0;i<n;i++){
            pq.push({heights[i],names[i]});
        }
        vector<string> ans;
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            ans.push_back(i.second);
        }
        return ans;

    }
};