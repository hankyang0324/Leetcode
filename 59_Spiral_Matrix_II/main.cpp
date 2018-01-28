//https://leetcode.com/problems/spiral-matrix-ii/description/

//Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

//For example,
//Given n = 3,

//You should return the following matrix:
//[
// [ 1, 2, 3 ],
// [ 8, 9, 4 ],
// [ 7, 6, 5 ]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int size=n;
        int i=0,j=0,num=1;
        vector<vector<int>> res(n,vector<int>(n));
        n++;
        while(n>0){
            n-=2;
            int step=n;
            while(step>0){//right
                step--;
                res[i][j++]=num++;
            }
            step=n;
            while(step>0){//down
                step--;
                res[i++][j]=num++;
            }
            step=n;
            while(step>0){//left
                step--;
                res[i][j--]=num++;
            }
            step=n;
            while(step>0){//up
                step--;
                res[i--][j]=num++;
            }
            i++;//一圈结束调整位置
            j++;//一圈结束调整位置
        }
        if(n==0) res[size/2][size/2]=size*size;
        return res;
    }
};

int main(){}
