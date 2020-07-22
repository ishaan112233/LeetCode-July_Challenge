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
        if(root == NULL){
            return {};
        }
        vector<vector<int>>traversal;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *temp;
        int l = 0;
        while(!q.empty()){
            int count = q.size();
            vector<int>seq;
            l++;
            while(count--){
                temp = q.front();
                q.pop();
                seq.emplace_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            if(!(l&1)){
                reverse(seq.begin(), seq.end());
            }
            traversal.emplace_back(seq);
            
        }
        return traversal;
    }
};