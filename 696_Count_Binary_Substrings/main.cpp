//https://leetcode.com/problems/count-binary-substrings/description/

//Give a string s, count the number of non-empty (contiguous) substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.

//Substrings that occur multiple times are counted the number of times they occur.

//Example 1:
//Input: "00110011"
//Output: 6
//Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> changePos;
        changePos.push_back(0);
        for(int i=1;i<s.length();i++){
            if(s[i]^s[i-1])
                changePos.push_back(i);
        }
        changePos.push_back(s.length());
        int sum=0;
        for(int i=1;i<changePos.size()-1;i++){
            sum+=min(changePos[i]-changePos[i-1],changePos[i+1]-changePos[i]);
        }
        return sum;
    }
};

int main(){}

//1.用数组记录每次0，1发生变化的位置
//2.位置两两相减取min，再相加
