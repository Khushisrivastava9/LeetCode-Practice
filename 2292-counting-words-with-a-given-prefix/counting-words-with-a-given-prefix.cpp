class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string w=words[i];
            if(w.substr(0,pref.size())==pref) cnt++;
        }
        return cnt;
    }
};