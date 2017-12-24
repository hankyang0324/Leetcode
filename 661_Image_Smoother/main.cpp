//https://leetcode.com/problems/image-smoother/description/

//Given a 2D integer matrix M representing the gray scale of an image, you need to design a smoother to make the gray scale of each cell becomes the average gray scale (rounding down) of all the 8 surrounding cells and itself. If a cell has less than 8 surrounding cells, then use as many as you can.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int dx[9]={0,1,1,0,-1,-1,-1,0,1};
        int dy[9]={0,0,1,1,1,0,-1,-1,-1};
        int cols=M[0].size();
        int rows=M.size();
        vector<vector<int>> ans(rows,vector<int>(cols));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int count=9;
                int average=0;
                for(int k=0;k<9;k++){
                    int x=dx[k]+j;
                    int y=dy[k]+i;
                    if(0<=x&&x<cols&&0<=y&&y<rows)
                        average+=M[y][x];
                    else
                        count--;
                }
                ans[i][j]=average/count;
            }
        }
        return ans;
    }
};

int main(){}

//二维数组初始化：vector<vector<int>> ans(rows,vector<int>(cols));
