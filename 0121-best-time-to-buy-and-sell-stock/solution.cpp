class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],i,cost,n=prices.size(),maxprofit=0;
        
        for(i=1;i<n;i++)
        {
            cost=prices[i]-mini;
            maxprofit=max(maxprofit,cost);
            mini=min(mini,prices[i]);


        }
        return maxprofit;

        
    }
};
