class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int bits[32] = {0};
        for (int num : candidates) {
            int j = 0;
            while (num > 0) {
                bits[j++] += num & 1;
                num >>= 1;
            }
        }
        return *std::max_element(bits, bits + 32);
    }
};