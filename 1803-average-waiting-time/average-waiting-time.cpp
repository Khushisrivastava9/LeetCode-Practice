class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        int n=customers.size();
        if(n==0) return 0;
        int stwait=customers[0][0];
        for(int i=0;i<n;i++){
            if(stwait<customers[i][0]) stwait=customers[i][0]+customers[i][1];
            else stwait+=customers[i][1];
            ans+=stwait-customers[i][0];
        }
        ans/=n;
        return ans;
    }
};