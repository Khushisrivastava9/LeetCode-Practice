class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            string word="";
            while(i<s.size() && s[i]==' '){
                i++;
            }
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            i++;
            if(!word.empty()){
                ans=word+' '+ans;
            }
        }
        ans.pop_back();
        return ans;
    }
};