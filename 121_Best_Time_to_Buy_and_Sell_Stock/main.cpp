//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

//Say you have an array for which the ith element is the price of a given stock on day i.

//If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        if(size==0)
            return 0;
        int minPrice=prices[0];
        int maxProfit=0;
        for(int i=0;i<size;i++){
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
        }
        return maxProfit;
    }
};

int main(){}

//1.比较当日价与当前最低价，当日价低则替换当前最低价
//2.用当日价减去当前最低价得到当日利润
//3.比较当日利润与当前最大利润，当日利润高则替换当前最大利润
