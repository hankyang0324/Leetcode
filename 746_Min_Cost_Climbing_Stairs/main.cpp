//https://leetcode.com/problems/min-cost-climbing-stairs/description/

//On a staircase, the i-th step has some non-negative cost cost[i] assigned (0 indexed).

//Once you pay the cost, you can either climb one or two steps. You need to find minimum cost to reach the top of the floor, and you can either start from the step with index 0, or the step with index 1.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size=cost.size();
        vector<int> dp(size+1);
        dp[0]=0;//到这一级的总cost，不包括这一级的cost
        dp[1]=0;
        for(int i=2;i<size+1;i++)
            dp[i]=min(cost[i-2]+dp[i-2],cost[i-1]+dp[i-1]);
        return dp[size];
    }
};

int main(){}
//动态规划(Dynamic programming, DP)的问题，不会
//到当前级的最低cost=min（到上一级的最低cost和+上一级的cost，到上两级的最低cost和+上两级的cost）
//迭代至最顶级（size+1）的最低cost和
