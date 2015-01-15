/*

Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

For example,
Given the following matrix:

[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
You should return [1,2,3,6,9,8,7,4,5].
*/



// carefully check border

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> res;
		if(matrix.size()<=0) return res;
		int m = matrix.size();
		int n = matrix[0].size();
		
		
		
		int top =0;
		int bottom = m-1;
		int left =0;
		int right = n-1;
		while(left<right && top<bottom)
		{
			for(int i=left;i<right;i++)
			{
			  int v = matrix[top][i];
			  res.push_back(v);
			}
				
			for(int i=top;i<bottom;i++)
			{
			  int v = matrix[i][right];
			  res.push_back(v);
			}
	
			for(int i=right;i>left;i--)
			{
			  int v = matrix[bottom][i];
			  res.push_back(v);
			}
			
			
			for(int i=bottom;i>top;i--)
			{
			  int v = matrix[i][left];
			  res.push_back(v);
			}
			left++;
			right--;
			top++;
			bottom--;
		}
		
		if(m==n && m%2!=0)
		{
			int v = matrix[m/2][n/2];
			res.push_back(v);
		}
		if(m>n )
		{
			if(left==right)
			{
				for(int i=top;i<=bottom;i++)
				{
					int v = matrix[i][left];
					res.push_back(v);
				}
			}
		}
		else if(m<n)
		{
			if(top==bottom)
			{
				for(int i=left;i<=right;i++)
				{
					int v = matrix[top][i];
					res.push_back(v);
				}
			}
		}
		return res;
    }
};
