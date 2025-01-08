/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int diame(TreeNode* root,int &maxi){
    if(root==NULL) return 0;
    int lh=diame(root->left,maxi);
    int rh=diame(root->right,maxi);
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
}
    int diameterOfBinaryTree(TreeNode* root){
        int maxi=0;
        diame(root,maxi);
        return maxi;
    }
};