class Solution {
public:
int beauty(vector<int> &v){
    int maxi=0,mini=INT_MAX;
    for(int i=0;i<26;i++){
        maxi=max(maxi,v[i]);
        if(v[i]>0){//because 0 freq means it's not in substring only isiliye we are writing a condition.
            mini=min(mini,v[i]);
        }
    }
    return maxi-mini;
}
    int beautySum(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> v(26,0);
            for(int j=i;j<n;j++){
                v[s[j]-'a']++;
                ans+=beauty(v);
            }
        }
        return ans;
    }
};