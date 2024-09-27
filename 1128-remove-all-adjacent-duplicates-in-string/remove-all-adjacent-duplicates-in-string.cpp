class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
       stack<char> st;
       int i=0;
       while(i<n){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
        }
        else{
           st.pop();
        }
        i++;
       }
       string ans="";
       while(!st.empty()){
        char top=st.top();
        ans+=top;
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};