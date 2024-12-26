#define ll long long
class Solution {
public:
int m=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<int> s1,s2;
        vector<int> leftsmallestarr(n,-1);//indices of the smaller element to it's left
        vector<int> rightsmallestarr(n,n);//indices of the smaller element to it's right
        for(int i=0;i<n;i++){
            while(!s1.empty() && arr[s1.top()]>arr[i]){
                s1.pop();
            }
            if(!s1.empty()){
                leftsmallestarr[i]=s1.top();
            }
            s1.push(i);
        }
        for(int i=0;i<n;i++){
            while(!s2.empty() && arr[s2.top()]>arr[i]){
                rightsmallestarr[s2.top()]=i;
                s2.pop();
            }
            s2.push(i);
        }
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += static_cast<ll>(i - leftsmallestarr[i]) * (rightsmallestarr[i] - i) * arr[i] % m;
            sum %= m;
        }
        return sum;
    }
};