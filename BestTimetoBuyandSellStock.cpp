


class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function	   
		int n = prices.size();
		if (n<=1) return 0;
		int profit =0;
		int low = prices[0];
		for(int i=1;i<n;i++)
		{
			int nowProf = prices[i]-low;
			if(nowProf>profit)
			{
				profit = nowProf;
			}
			
			if(low>prices[i])
			{
			   low = prices[i];
			}
		}
		
		return profit;
		
    }
};



