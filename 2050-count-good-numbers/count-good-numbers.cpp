class Solution {
    public:
    long MOD = 1000000007;
    long fastExpo(long base, long exp) {
        long result = 1;
        base = base % MOD; // Take mod of base to keep it within MOD

        while (exp > 0) {
            if ((exp & 1) == 1) { // If exp is odd, multiply base with result
                result = (result * base) % MOD;
            }
            exp = exp >> 1; // Divide exp by 2
            base = (base * base) % MOD; // Square the base and take mod
        }
        return result;
    }
    int countGoodNumbers(long n) {
        long evenPos = (n+1) / 2;
        long oddPos = n - evenPos;

        // 5 choices for even positions and 4 choices for odd positions
        long result = (fastExpo(5, evenPos) * fastExpo(4, oddPos)) % MOD;
        return (int) result;
    }
};