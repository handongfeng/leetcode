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
    vector<vector<int> > levelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int>> ret;
    	queue<TreeNode*> q2;
		if (!root) return ret;
		
		q2.push(root);
		
		while(!q2.empty()  )
		{
			vector<int> tmp;
			queue<TreeNode*> q;
			while(!q2.empty())
			{
				TreeNode * current = q2.front();	
				q2.pop();
			
				if(current) 
				{
					tmp.push_back(current->val);
					q.push(current->left);
					q.push(current->right);
				}				
			}
            if(tmp.size()>0)
		    	ret.push_back(tmp);
			q2= q;
		}
        
		vector<vector<int>> ret2;
		int n = ret.size();
		if (n<1) return ret2;
		
		
		for(int i=n-1;i>=0;i--)
		{
			vector<int> tmp = ret[i];
			ret2.push_back(tmp);
		}
		
		
		return ret2;
    }
};