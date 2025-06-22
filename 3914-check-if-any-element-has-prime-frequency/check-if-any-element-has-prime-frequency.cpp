class Solution {
public:
bool isprime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)  
            return false;
    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto i:freq){
            if(isprime(i.second)) return true;
        }
        return false;
    }
};