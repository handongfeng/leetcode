class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n= prices.size();
        if(n<2) return 0;
        
        int buy=prices[0];
        int sell=0;
        int profit =0;
        for(int i=1;i<n;i++)
        {
            sell = prices[i];
            
            if(sell<buy)
            {
                buy=sell;
            }
            if(sell>buy)
            {
                profit += sell-buy;
                buy =sell;
            }
        }
        
        return profit;
    }
};