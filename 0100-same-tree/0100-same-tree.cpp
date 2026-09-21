class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both are empty
        if (p == NULL && q == NULL)
            return true;

        // One is empty, one is not
        if (p == NULL || q == NULL)
            return false;

        // Values different
        if (p->val != q->val)
            return false;

        // Check left and right
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};