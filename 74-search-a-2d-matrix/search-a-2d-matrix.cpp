class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //in bs we just find mid and then move the pointers
        //in that case i need a 1d array so basically ik whats mid so i can convert it
        //into 2d by formula: row:- mid/m;   col:- mid%m;
        int n=matrix.size();
        int m=matrix[0].size();
        int s=0;
        int e=(n*m)-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return false;

    }
};