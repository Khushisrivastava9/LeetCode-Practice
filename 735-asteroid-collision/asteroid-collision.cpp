class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            while(!st.empty() && st.top()>0 && asteroids[i]<0){
                int top=st.top();
                int sum=top+asteroids[i];
                if(sum<0){
                    st.pop();
                }
                else if(sum>0) {
                    asteroids[i]=0;
                }
                else{
                    st.pop();
                    asteroids[i]=0;
                }
            }
            if(asteroids[i]!=0) st.push(asteroids[i]);
        }
        while(!st.empty()){
            int top=st.top();
            st.pop();
            ans.push_back(top);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};