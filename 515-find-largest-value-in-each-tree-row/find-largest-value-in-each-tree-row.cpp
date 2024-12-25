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
    vector<int> largestValues(TreeNode* root) {
        //levelorder /bfs traversal
        queue<TreeNode*> levelorder;
        //store the maximumvalues levelwise
        vector<int> maxval;
        //if tree is not present then return empty array
        if(root==NULL){
            return maxval;
        }
        levelorder.push(root); 
        while(!levelorder.empty()){
            int size=levelorder.size();
            int maxi=INT_MIN;
            while(size-->0){
                TreeNode* currnode=levelorder.front();
                maxi=max(maxi,currnode->val);
                levelorder.pop();
                if(currnode->left!=NULL){
                    levelorder.push(currnode->left);
                }
                if(currnode->right!=NULL){
                    levelorder.push(currnode->right);
                }
                
            }
            maxval.push_back(maxi);
        }
        return maxval;
        
    }
};