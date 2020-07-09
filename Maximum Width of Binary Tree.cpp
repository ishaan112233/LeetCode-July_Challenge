class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)  return 0;
        int res = 0;
        queue<TreeNode*> q;
        root->val = 0;
        q.push(root);
        while (!q.empty()) {
            int s = q.size();
            int minIndex;
            for (int i = 0; i < s; i++) {
                TreeNode* t = q.front();
                q.pop();
                if (i == 0) minIndex = t->val;
                if (i == s - 1) res = std::max(res, t->val - minIndex + 1);
                t->val = t->val - minIndex;
                if (t->left) {
                    t->left->val = 2 * t->val;
                    q.push(t->left);
                }
                if (t->right) {
                    t->right->val = 2 * t->val + 1;
                    q.push(t->right);
                }
            }
        }
        return res;
    }
};