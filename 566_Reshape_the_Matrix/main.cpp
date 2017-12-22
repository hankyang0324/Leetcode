//In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.

//You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.

//The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.

//If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int nr=nums.size();
        int nc=nums[0].size();
        if(nr*nc!=r*c)
            return nums;
        vector<vector<int>> reshape(r,vector<int>(c));
        for(int i=0;i<r*c;i++)
            reshape[i/c][i%c]=nums[i/nc][i%nc];
        return reshape;
    }
};

int main(){}
//for(int i=0;i<r*c;i++)
//            reshape[i/c][i%c]=nums[i/nc][i%nc];
//序列转二维数组位置
// vector<vector<int>> reshape(r,vector<int>(c));
//vector<T> v(n,i)形式，v包含n 个值为 i 的元素
//vector<T> v(n)形式，v包含n 个值初始化的元素
