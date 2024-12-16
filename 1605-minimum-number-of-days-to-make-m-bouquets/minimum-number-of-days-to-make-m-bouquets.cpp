class Solution {
public:
bool possible(int day, vector<int>& bloomDay, int m, int k) {
    int cnt = 0;
    int totalbqtmade = 0;
    int n = bloomDay.size(); // Avoid global variable dependency
    for (int i = 0; i < n; i++) {
        if (bloomDay[i] <= day) {
            cnt++;
        } else {
            totalbqtmade += cnt / k;
            cnt = 0;
        }
    }
    totalbqtmade += cnt / k; // Include remaining bouquets
    return totalbqtmade >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int n = bloomDay.size();
        long long int data = 1LL * m * k; // Avoid overflow
        if (data > n) return -1; // Not enough flowers for m bouquets
        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        long long int ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (possible(mid, bloomDay, m, k)) {
                e = mid - 1;
                ans = mid;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};