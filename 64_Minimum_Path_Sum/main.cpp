//https://leetcode.com/problems/minimum-path-sum/description/

//Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

//Note: You can only move either down or right at any point in time.

//Example 1:
//[[1,3,1],
// [1,5,1],
// [4,2,1]]
//Given the above grid map, return 7. Because the path 1→3→1→1→1 minimizes the sum.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        for(int i=1;i<grid.size();i++){
            grid[i][0]+=grid[i-1][0];
        }
        for(int j=1;j<grid[0].size();j++){
            grid[0][j]+=grid[0][j-1];
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};

int main(){}

//参考62_Unique_Path，贪心算法
