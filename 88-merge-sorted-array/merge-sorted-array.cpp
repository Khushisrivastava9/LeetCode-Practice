class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                i++;
                sort(nums2.begin(),nums2.end());
            }
            else if(nums1[i]<=nums2[j]){
                i++;
            } 
        }
        while(i<m+n && j<n){
            swap(nums1[i],nums2[j]);
            i++;
            j++;
        }
    }
};