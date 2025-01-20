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
TreeNode* solve(vector<int>& preorder,int &preidx, unordered_map<int,int> &inordpos,int inst,int inend,int n){
    if(preidx>=n || inst>inend) return NULL;
    int elem=preorder[preidx++];
    TreeNode* root=new TreeNode(elem);
    int pos=inordpos[elem];
    root->left=solve(preorder,preidx,inordpos,inst,pos-1,n);
    root->right=solve(preorder,preidx,inordpos,pos+1,inend,n);
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder=preorder;
        sort(inorder.begin(),inorder.end());
        int n=preorder.size();
        int preidx=0;
        unordered_map<int,int> inordpos;
        for(int i=0;i<n;i++){
            inordpos[inorder[i]]=i;
        }
        return solve(preorder,preidx,inordpos,0,n-1,n);
    }
};