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
TreeNode* minval(TreeNode* root){
    while(root->left){
        root=root->left;
    }
    return root;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else{
            //0 child case
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;                
            }
            //1 child
            else if(root->left==NULL && root->right!=NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;               
            }
            else if(root->left!=NULL && root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;         
            }
            //2 child
            else{
                TreeNode* mini=minval(root->right);
                root->val=mini->val;
                root->right=deleteNode(root->right,mini->val);
            }
        }
        return root;
    }
};