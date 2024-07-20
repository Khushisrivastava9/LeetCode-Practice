class Solution {
public:
vector<string> res;
bool isvalidpara(string curr){
    stack<char> st;
    for(int i=0;i<curr.size();i++){
        if(curr[i]=='('){
            st.push('(');
        }
        else{
            if(!st.empty()){
                char top=st.top();
                if(top=='('){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    return st.empty();
}
void solve(string curr,int n){
    if(curr.length()==2*n){
        if(isvalidpara(curr)){
            res.push_back(curr);
        }
        
        return;
    } 
    curr.push_back('(');
    solve(curr,n);
    curr.pop_back();
    curr.push_back(')');
    solve(curr,n);
    curr.pop_back();

}
    vector<string> generateParenthesis(int n) {
        solve("",n);
        return res;
    }
};