class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans="";
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                if(st.size()>0){
                    ans+=ch;
                   
                }
                st.push(ch);
            }else{
                if(st.size()>1){
                    ans+=')';
                }
                st.pop();
            }
        }
        return ans;
    }
};