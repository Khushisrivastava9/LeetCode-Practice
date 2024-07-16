class Solution {
public:
int solve(int i,string s,long long ans,int sign){
    if(i>=s.size() || !isdigit(s[i])) return ans*sign;
    ans=ans*10+s[i]-'0';
    if(ans>INT_MAX) return sign==-1?INT_MIN:INT_MAX;
    return solve(i+1,s,ans,sign);

}
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        while(i<s.size() && s[i]==' ') i++;
        if(s[i]=='+' || s[i]=='-') sign=44-s[i++];
        return solve(i,s,0,sign);
    }
};