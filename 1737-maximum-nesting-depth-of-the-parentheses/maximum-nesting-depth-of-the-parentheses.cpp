class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxdepth=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='('){
                cnt++;
                maxdepth=max(maxdepth,cnt);
            }else if(c==')') cnt--;
        }
        return maxdepth;
    }

};