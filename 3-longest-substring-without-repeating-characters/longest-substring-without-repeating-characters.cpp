class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxi=0;
        int i=0,j=0;
        unordered_map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            while (mp[s[j]] > 1) {
            mp[s[i]]--;
            i++;
        }
        
        maxi = max(maxi, j - i + 1); // Correct length calculation
        j++;
            
        }
        return maxi;
    }
};