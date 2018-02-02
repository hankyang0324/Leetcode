//https://leetcode.com/problems/set-matrix-zeroes/description/

//Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int col0=1,row0=1;
        for(int i=0;i<rows;i++){//检测第一列是否有0
            if(matrix[i][0]==0){
                col0=0;
                break;
            }
        }
        for(int i=0;i<cols;i++){//检测第一行是否有0
            if(matrix[0][i]==0){
                row0=0;
                break;
            }
        }
        for(int i=1;i<rows;i++){//对应位置第一行第一列置0
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==0) matrix[i][0]=matrix[0][j]=0;
            }
        }
        for(int i=1;i<rows;i++){//查第一列，整行置0
            if(matrix[i][0]==0){
                for(int j=1;j<cols;j++) matrix[i][j]=0;
            }
        }
        for(int j=1;j<cols;j++){//查第一行，整列置0
            if(matrix[0][j]==0){
                for(int i=1;i<rows;i++) matrix[i][j]=0;
            }
        }
        if(row0==0){//第一行置0
            for(int j=0;j<cols;j++) matrix[0][j]=0;
        }
        if(col0==0){//第一列置0
            for(int i=0;i<rows;i++) matrix[i][0]=0;
        }
    }
};

int main(){}
