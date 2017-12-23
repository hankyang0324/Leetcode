//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

//Say you have an array for which the ith element is the price of a given stock on day i.

//Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int profit=0;
        for(int i=0;i<size-1;i++){
            int d=prices[i+1]-prices[i];
            if(d>0)
                profit+=d;
        }
        return profit;
    }
};

int main(){}

//涨的话加上两天的差价，跌不操做。
//也就是说局部最低点买入，局部最高点卖出。
