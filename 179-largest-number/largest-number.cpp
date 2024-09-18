class Solution {
public:
static bool cmp(string a ,string b){
    return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {
        vector<string> store;
        int n=nums.size();
        for(int i=0;i<n;i++){
            store.push_back(to_string(nums[i]));
        }
        sort(store.begin(),store.end(),cmp);
        string res;
        for(int i=0;i<store.size();i++){
            res+=store[i];
        }
        return res[0]=='0'?"0":res;
    }
};