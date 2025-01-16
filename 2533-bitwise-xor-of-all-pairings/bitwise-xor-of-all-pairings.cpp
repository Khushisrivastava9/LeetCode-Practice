class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n2 = nums2[0];
        bool even_size_nums2 = false;
        for(int i = 1; i < nums2.size(); i++){
            n2 ^= nums2[i];
        }
        if(nums2.size() % 2 == 0){
            even_size_nums2 = true;
        }
        int n1 = 0;
        for(int i = 0; i < nums1.size(); i++){
            if(even_size_nums2){
                n1 ^= n2;
            }
            else{
                n1 ^= (nums1[i] ^ n2);
            }
        }
        return n1;
    }
};