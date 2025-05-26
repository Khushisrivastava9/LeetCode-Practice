class Solution {
public:
    int solve(int i, string s, long long ans, int sign){
        if(i >= s.size() || !isdigit(s[i])) return ans * sign;
        ans = ans * 10 + (s[i] - '0');
        if(ans * sign >= INT_MAX) return INT_MAX;
        if(ans * sign <= INT_MIN) return INT_MIN;

        return solve(i + 1, s, ans, sign);
    }

    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        while(i < s.size() && s[i] == ' ') i++;
        if(i < s.size()) {
            if(s[i] == '-') {
                sign = -1;
                i++;
            } else if(s[i] == '+') {
                i++;
            }
        }
        if(i >= s.size() || !isdigit(s[i])) return 0;
        return solve(i, s, 0, sign);
    }
};
