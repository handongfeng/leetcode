class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
		int n= num.size();
        
		int _min =INT_MAX;
		int _minSum =0;
		
		vector<vector<int> > ret;
		set<vector<int> > retset;
		if(n<4) return ret;
        else
        {
			sort(num.begin(),num.end());
            for(int i=0;i<n-3;i++)
			{
			  for(int ii=i+1;ii<n-2;ii++)
			  {
				int j= ii+1;
				int k=n-1;
				while(j<k)
				{
					int sum = num[i]+num[ii]+num[j]+num[k];
				
					if(sum-target<0)
					{
						j++;
					}
					else if(sum-target>0)
					{
						k--;
					}
					else
					{
						vector<int> v;
						v.push_back(num[i]);
						v.push_back(num[ii]);
						v.push_back(num[j]);
						v.push_back(num[k]);
						retset.insert(v);
					
						j++;
						k--;
					}
			
				}
				}
			}
				
        }
		set<vector<int> >::iterator it;
		for(it=retset.begin();it!=retset.end();it++)
		{
			ret.push_back((*it));
		}
			return ret;
		
    }
};