class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> um;
        for(int i=0;i<allowed.size();i++){
            um[allowed[i]]++; 
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            string tmp = words[i];
            bool fl = true;
            for(int j=0;j<tmp.size();j++){
                if(um.find(tmp[j]) != um.end()){
                    continue;
                }
                else{
                    fl=false;
                    break;
                }
            }
            if(fl){ans++;}
        }
        return ans;
    }
};