class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
         int n= num.size();
        
		int _min =INT_MAX;
		int _minSum =0;
		
		vector<vector<int> > ret;
		set<vector<int> > retset;
		if(n<3) return ret;
        else
        {
			sort(num.begin(),num.end());
            for(int i=0;i<n-2;i++)
			{
				int j= i+1;
				int k=n-1;
				while(j<k)
				{
					int sum = num[i]+num[j]+num[k];
					if(sum<0)
					{
						j++;
					}
					else if(sum>0)
					{
						k--;
					}
					else
					{
						vector<int> v;
						v.push_back(num[i]);
						v.push_back(num[j]);
						v.push_back(num[k]);
						retset.insert(v);
						j++;
						k--;
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