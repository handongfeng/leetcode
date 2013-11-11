class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n= num.size();
        
		int _min =INT_MAX;
		int _minSum =0;
		
		if(n<3) return 0;
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
					int diff = (sum-target);
					if(abs(diff)<_min)
					{
						_min=abs(diff);
						_minSum =sum;
					}
					if(diff<0)
					{
						j++;
					}
					else if(diff>0)
					{
						k--;
					}
					else
					{
						j++;
						k--;
					}
			
				}
			}
				
        }
        return _minSum;
    }
};