class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        int cnt=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j>=g.size()) break;
            if(s[i]>=g[j]){
                cnt++;
                j++;
            }
        }
        return cnt;
    }
};