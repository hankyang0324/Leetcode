//https://leetcode.com/problems/pascals-triangle/description/

//Given numRows, generate the first numRows of Pascal's triangle.

//For example, given numRows = 5,
//Return

//[
//     [1],
//    [1,1],
//   [1,2,1],
//  [1,3,3,1],
// [1,4,6,4,1]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Pascal(numRows);
        for(int i=0;i<numRows;i++){
            Pascal[i]=vector<int>(i+1,1);
            if(i>=2)
                for(int j=1;j<Pascal[i].size()-1;j++)
                    Pascal[i][j]=Pascal[i-1][j-1]+Pascal[i-1][j];
        }
        return Pascal;
    }
};

int main(){}

//熟练掌握vector嵌套
