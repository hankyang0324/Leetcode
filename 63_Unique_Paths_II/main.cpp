//https://leetcode.com/problems/unique-paths-ii/description/

//Follow up for "Unique Paths":

//Now consider if some obstacles are added to the grids. How many unique paths would there be?

//An obstacle and empty space is marked as 1 and 0 respectively in the grid.

//For example,
//There is one obstacle in the middle of a 3x3 grid as illustrated below.

//[
//  [0,0,0],
//  [0,1,0],
//  [0,0,0]
//]
//The total number of unique paths is 2.

//Note: m and n will be at most 100.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows=obstacleGrid.size(),cols=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[rows-1][cols-1]==1) return 0;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                if(obstacleGrid[i][j]==1) obstacleGrid[i][j]=INT_MAX;
        for(int i=0;i<rows;i++){
            if(obstacleGrid[i][0]==0) obstacleGrid[i][0]=1;
            else {
                for(;i<rows;i++) obstacleGrid[i][0]=INT_MAX;
                break;
            }
        }
        for(int j=1;j<cols;j++){
            if(obstacleGrid[0][j]==0) obstacleGrid[0][j]=1;
            else {
                for(;j<cols;j++) obstacleGrid[0][j]=INT_MAX;
                break;
            }
        }
        for(int i=1;i<rows;i++)
            for(int j=1;j<cols;j++)
                if(obstacleGrid[i][j]!=INT_MAX)
                    obstacleGrid[i][j]=(obstacleGrid[i-1][j]!=INT_MAX?obstacleGrid[i-1][j]:0)+(obstacleGrid[i][j-1]!=INT_MAX?obstacleGrid[i][j-1]:0);
        return obstacleGrid[rows-1][cols-1];
    }
};

int main(){}
