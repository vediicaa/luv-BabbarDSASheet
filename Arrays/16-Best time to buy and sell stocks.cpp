#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int x=0;
        int maxi=0;
    int diff=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[x]<=prices[i])
                diff=prices[i]-prices[x];
            else
                x=i;
            maxi=max(diff,maxi); 
        }
        return maxi;
}