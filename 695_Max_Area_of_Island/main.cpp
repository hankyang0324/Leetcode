//Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

//Find the maximum area of an island in the given 2D array. (If there is no island, the maximum area is 0.)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int largest=0;
        int area=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    area=check(grid,i,j);
                    if(largest<area)
                        largest=area;
                }
            }
        }
        return largest;
    }
    int check(vector<vector<int>>& grid,int r,int c){
        if(r<0||r>=grid.size()||c<0||c>=grid[0].size())
            return 0;
        if(grid[r][c]==0)
            return 0;
        grid[r][c]=0;//if(grid[r][c]==1)
        return 1+check(grid,r-1,c)+check(grid,r,c+1)+check(grid,r+1,c)+check(grid,r,c-1);
    }
};

int main(){}

//有点难想rescurive步骤
//recursive想清楚每一步要干什么和退出条件
//把visit过的点grid[i][j]的值变成0很关键

