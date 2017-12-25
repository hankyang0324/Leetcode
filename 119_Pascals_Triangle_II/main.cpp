//https://leetcode.com/problems/pascals-triangle-ii/description/

//Given an index k, return the kth row of the Pascal's triangle.

//For example, given k = 3,
//Return [1,3,3,1].

//Note:
//Could you optimize your algorithm to use only O(k) extra space?

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>pre(rowIndex,1);
        vector<int>cur(rowIndex+1,1);
        for(int i=2;i<=rowIndex;i++){
            for(int j=1;j<i;j++)
                cur[j]=pre[j-1]+pre[j];
            for(int j=1;j<i;j++)
                pre[j]=cur[j];
        }
        return cur;
    }
};

int main(){}

//pre存前一行
//cur存后一行
//cur给pre
//循环
