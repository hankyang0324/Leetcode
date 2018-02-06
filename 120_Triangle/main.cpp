#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // int minimumTotal(vector<vector<int>>& triangle) {
    //     return minimumTotal(triangle,0,0,triangle[0][0]);
    // }
    // int minimumTotal(vector<vector<int>>& triangle,int row,int col,int sum){
    //     if(row==triangle.size()-1)
    //         return sum;
    //     return min(minimumTotal(triangle,row+1,col,sum+triangle[row+1][col]), minimumTotal(triangle,row+1,col+1,sum+triangle[row+1][col+1]));
    // } //太慢
    int minimumTotal(vector<vector<int>>& triangle) { //dynamic programming
        int size=triangle.size();
        vector<int> mini=triangle.back();
        for(int i=size-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                mini[j]=min(mini[j],mini[j+1])+triangle[i][j];
            }
        }
        return mini[0];
    }
};

int main(){}
