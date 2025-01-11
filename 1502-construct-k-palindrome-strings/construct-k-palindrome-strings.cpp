class Solution {
public:
    bool canConstruct(string s, int k) {
        vector<int> alpha(26,0);
        for(auto &i: s) alpha[i -'a']++;
        int cnt = 0;
        for(int i = 0; i < 26; i++){
            if(alpha[i] & 1)cnt++;
        }
        if(cnt > k || k > s.length())return false;
        return true;
    }
};