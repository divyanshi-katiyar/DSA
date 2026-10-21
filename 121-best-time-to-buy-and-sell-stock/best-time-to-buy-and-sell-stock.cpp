class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int maxprofit=0;
       int minprice=prices[0];
       for(int i=0;i<n;i++){
            int profit=prices[i]-minprice;
            maxprofit=max(profit,maxprofit);
            minprice=min(minprice,prices[i]);
       }
       return maxprofit;
    }
};