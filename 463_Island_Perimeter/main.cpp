//https://leetcode.com/problems/island-perimeter/description/

//You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water. Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cols=grid[0].size();
        int rows=grid.size();
        int perimeter=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                    int count=4;
                    if(i-1>=0&&grid[i-1][j]==1)
                        count--;
                    if(i+1<rows&&grid[i+1][j]==1)
                        count--;
                    if(j-1>=0&&grid[i][j-1]==1)
                        count--;
                    if(j+1<cols&&grid[i][j+1]==1)
                        count--;
                    perimeter+=count;
                }
            }
        }
        return perimeter;
    }
};

int main(){}

//有几个相邻的cell，边框数减几
