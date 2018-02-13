//https://leetcode.com/problems/maximal-square/description/

//Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

//For example, given the following matrix:

//1 0 1 0 0
//1 0 1 1 1
//1 1 1 1 1
//1 0 0 1 0
//Return 4.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0 || matrix[0].size()==0) return 0;
        int maximum=0;
        for(int i=1;i<matrix.size();i++) {
            for(int j=1;j<matrix[0].size();j++) {
                if(matrix[i][j]!='0') matrix[i][j]=min(matrix[i-1][j-1]-'0',min(matrix[i][j-1]-'0',matrix[i-1][j]-'0'))+1+'0';
                maximum=max(maximum,matrix[i][j]-'0');
            }
        }
        if(maximum!=0) return maximum*maximum;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]=='1') return 1;
        }
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[0][j]=='1') return 1;
        }
        return 0;
    }
};

int main(){}

//dp
//matrix[i][j]不为0的话，
//等于左边，左上，上方元素中的最小值+1。
