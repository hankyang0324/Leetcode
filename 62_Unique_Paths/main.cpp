//https://leetcode.com/problems/unique-paths/description/

//A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

//The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

//How many possible unique paths are there?

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> path(m,vector<int>(n,1));
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                path[i][j] = path[i - 1][j] + path[i][j - 1];
        return path[m - 1][n - 1];
    }
};

int main(){}

//贪心算法，类似：64_Minimum_Path_Sum
