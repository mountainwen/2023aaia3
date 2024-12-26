//leetcode maximum depth of binary tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //需要終止條件 terminal condition
        if(root==nullptr ) return 0;
        int ans1=maxDepth(root->left);
        int ans2=maxDepth(root->right);
        return max(ans1, ans2)+1;
    }
};