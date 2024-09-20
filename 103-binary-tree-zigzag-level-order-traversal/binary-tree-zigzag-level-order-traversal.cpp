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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root== NULL) return ans;
        q.push(root);
        bool l=true;
        while(!q.empty()){
            int lvl=q.size();
            vector<int> tmp;
            for(int i=0;i<lvl;i++){
                TreeNode* f=q.front();
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
                tmp.push_back(f->val);
            }
            if(l==true) ans.push_back(tmp);
            else{
                reverse(tmp.begin(),tmp.end());
                ans.push_back(tmp);
            }
            if(l==true) l=false;
            else l=true;

        }
        return ans;
    }
};