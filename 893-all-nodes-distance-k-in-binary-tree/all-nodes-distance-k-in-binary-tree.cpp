/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void mark_parent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parent){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* currnode=q.front();
        q.pop();
        if(currnode->left){
            parent[currnode->left]=currnode;
            q.push(currnode->left);
        }
        if(currnode->right){
            parent[currnode->right]=currnode;
            q.push(currnode->right);
        }
    }
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        mark_parent(root,parent);
        queue<TreeNode*> q;
        q.push(target);
        unordered_map<TreeNode*,bool> vis;
        int dist=0;
        vis[target]=true;
        while(!q.empty()){
            int size=q.size();
            if(dist==k)  break;
            dist++;
            for(int i=0;i<size;i++){
                TreeNode* fr=q.front();
                q.pop();
                if(fr->left && !vis[fr->left]){
                    vis[fr->left]=true;
                    q.push(fr->left);
                }
                if(fr->right && !vis[fr->right]){
                    vis[fr->right]=true;
                    q.push(fr->right);
                }
                if(parent[fr] && !vis[parent[fr]]){
                    vis[parent[fr]]=true;
                    q.push(parent[fr]);
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;

    }
};