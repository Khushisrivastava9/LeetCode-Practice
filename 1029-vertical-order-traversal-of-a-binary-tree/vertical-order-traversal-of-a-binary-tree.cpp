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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        map<int,map<int,vector<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> fr=q.front();
            q.pop();
            TreeNode* node=fr.first;
            int hd=fr.second.first;
            int lvl=fr.second.second;
            mp[hd][lvl].push_back(node->val);
            if(node->left){
                q.push({node->left,{hd-1,lvl+1}});
            }
            if(node->right){
                q.push({node->right,{hd+1,lvl+1}});
            }
        }
        for(auto i:mp){
            vector<int> res;
            for(auto j:i.second){
                if(j.second.size()>1){
                    sort(j.second.begin(),j.second.end());
                }
                for(auto k:j.second){
                    res.push_back(k);
                }
            }
            ans.push_back(res);
        }
        return  ans;
    }
};