//https://leetcode.com/problems/search-a-2d-matrix/description/

//Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

//Integers in each row are sorted from left to right.
//The first integer of each row is greater than the last integer of the previous row.
//For example,

//Consider the following matrix:

//[
//  [1,   3,  5,  7],
//  [10, 11, 16, 20],
//  [23, 30, 34, 50]
//]
//Given target = 3, return true.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        if(rows==0) return false;
        int cols=matrix[0].size();
        if(cols==0 || target<matrix[0][0] || target>matrix[rows-1][cols-1]) return false;
        int r=0;
        while(r<rows && target>=matrix[r][0]) r++;
        int c=0;
        while(c<cols && target>matrix[r-1][c]) c++;
        if(target==matrix[r-1][c]) return true;
        return false;
    }
};

int main(){}
