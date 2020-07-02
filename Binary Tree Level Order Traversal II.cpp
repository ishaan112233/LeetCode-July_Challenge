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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>result;
        if(root == NULL){
            return result;
        }
        stack<vector<int>>st;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *ref;
        int count = 0;
        while(!q.empty()){
            count = q.size();
            vector<int>l;
            while(count--){
                ref = q.front();
                q.pop();
                l.emplace_back(ref->val);
                if(ref->left!=NULL){
                    q.push(ref->left);
                }
                if(ref->right!=NULL){
                    q.push(ref->right);
                }
            }
            st.push(l);
        }
        while(!st.empty()){
            result.emplace_back(st.top());
            st.pop();
        }
        return result;
    }
};