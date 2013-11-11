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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
		
		queue<TreeNode*> q1;
		
		vector<vector<int>> ret;
		if(!root) return ret;
		
		q1.push(root);
		int level =0;
		while(!q1.empty())
		{
		
			queue<TreeNode*> q2;
			vector<int> tmp;
			while(!q1.empty())
			{
				TreeNode*p = q1.front();
				q1.pop();
								
				if(p->left) q2.push(p->left);				
				
				if(p->right) q2.push(p->right);				
				
				tmp.push_back(p->val);	
			}
			q1= q2;
			if(tmp.size()>0)
				ret.push_back(tmp);
			
			level++;
		}
		
		for(int i=0;i<level;i++)
		{
			if((i%2)!=0)
			{
				vector<int>  tmp = ret[i];
				reverse(tmp.begin(),tmp.end);
				ret[i] = tmp;
			}
		}
		return ret;
		
    }
};