#include <iostream>
#include <vector>

//Given a matrix consists of 0 and 1, find the distance of the nearest 0 for each cell.

//The distance between two adjacent cells is 1.
//Example 1:
//Input:

//0 0 0
//0 1 0
//0 0 0
//Output:
//0 0 0
//0 1 0
//0 0 0
//Example 2:
//Input:

//0 0 0
//0 1 0
//1 1 1
//Output:
//0 0 0
//0 1 0
//1 2 1
//Note:
//The number of elements of the given matrix will not exceed 10,000.
//There are at least one 0 in the given matrix.
//The cells are adjacent in only four directions: up, down, left and right.

using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> res=matrix;
        int rows=matrix.size();
        if(rows==0) return res;
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]!=0){
                    int left=j>0 ? res[i][j-1] : cols*rows;
                    int up=i>0 ? res[i-1][j] : cols*rows;
                    res[i][j]=min(left,up)+1;
                }
            }
        }
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=0;j--){
                if(matrix[i][j]!=0){
                    int right=j<cols-1 ? res[i][j+1] : cols*rows;
                    int down=i<rows-1 ? res[i+1][j] : cols*rows;
                    res[i][j]=min(res[i][j],min(right,down)+1);
                }
            }
        }
        return res;
    }
};

int main(){}

//DP
