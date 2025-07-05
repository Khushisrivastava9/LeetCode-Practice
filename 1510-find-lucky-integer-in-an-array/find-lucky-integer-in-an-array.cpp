class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=-1;
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.first==i.second) maxi=max(maxi,i.first);
        }
        return maxi;
    }
};