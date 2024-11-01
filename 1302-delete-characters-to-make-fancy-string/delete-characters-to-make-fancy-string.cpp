class Solution {
public:
    string makeFancyString(string s) {
        stack<char> st;
        string a="";
        int cnt=1;
        for(int i=0;i<s.length();i++){
            if(st.empty()) st.push(s[i]);
            else if(!st.empty() && st.top()==s[i]){
                cnt+=1;
                if(cnt<=2) st.push(s[i]);
            }else{
                cnt=1;
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            char top=st.top();
            st.pop();
            a+=top;
        }
        reverse(a.begin(),a.end());
        return a;
    }
};