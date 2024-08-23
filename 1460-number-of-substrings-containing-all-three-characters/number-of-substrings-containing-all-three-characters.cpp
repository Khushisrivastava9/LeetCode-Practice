class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length(); 
        int cnt=0;
        int a=-1,b=-1,c=-1;
        int i=0;
        while(i<n){
            if(s[i]=='a') a=i;
            else if(s[i]=='b') b=i;
            else c=i;
            if(a!=-1 && b!=-1 && c!=-1){
                int miniindofwindow=min(a,min(b,c));
                cnt+=miniindofwindow+1;
            }
            i++;
        }        
        return cnt;
    }
};