/** * Definition for binary tree * struct TreeNode { *     int val; *     TreeNode *left; *     TreeNode *right; *     TreeNode(int x) : val(x), left(NULL), right(NULL) {} * }; */class Solution {public:    void inorderTraversal_helper(TreeNode *root, vector<int>& ret)    {        if(!root) return;        inorderTraversal_helper(root->left, ret);        ret.push_back(root->val);        inorderTraversal_helper(root->right, ret);    }                vector<int> inorderTraversal(TreeNode *root) {        // Start typing your C/C++ solution below        // DO NOT write int main() function        vector<int> ret;        inorderTraversal_helper(root, ret);                return ret;    }};