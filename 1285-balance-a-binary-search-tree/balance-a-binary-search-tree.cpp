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
void inorder(TreeNode* root,vector<int> &in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->val);
    inorder(root->right,in);
}
TreeNode* binarypartition(vector<int> &in,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;
    TreeNode* temp=new TreeNode(in[mid]);
    temp->left=binarypartition(in,s,mid-1);
    temp->right=binarypartition(in,mid+1,e);
    return temp;
    
}
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        vector<int> in;
        inorder(root,in);
        int size=in.size();
        int s=0,e=size-1;
        return binarypartition(in,s,e);
    }
};