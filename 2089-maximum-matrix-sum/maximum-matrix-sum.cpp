class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        long long sum = 0; 
        int minus = INT_MAX, amt = 0;
        bool zero = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int tmp = matrix[i][j];
                sum += abs(tmp);
                minus = min(minus, abs(tmp));
                if(tmp < 0) amt++;
            }
        }
        if(amt%2) return sum-minus*2;
        return sum;
    }
};