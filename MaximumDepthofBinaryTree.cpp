/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

	int _maxDepth;
	
	int dfs(TreeNode *root, int depth )
	{
		if(!root)
		{
			depth--;
			return (depth);			
		}
		
		if(!root->left &&!root->right )
		{
			_maxDepth = max(_maxDepth, depth);
			return depth;
		}
	
		int left = dfs(root->left, depth+1);
		int right = dfs(root->right, depth+1);
		
	}



    int maxDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		if (!root) return 0;
		_maxDepth =0;
        dfs(root, 1 );
		return _maxDepth;
    }
};