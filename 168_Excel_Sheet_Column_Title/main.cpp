//https://leetcode.com/problems/excel-sheet-column-title/description/

//Given a positive integer, return its corresponding column title as appear in an Excel sheet.

//For example:

//    1 -> A
//    2 -> B
//    3 -> C
//    ...
//    26 -> Z
//    27 -> AA
//    28 -> AB

#include <iostream>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n>0){
            n--;//注意这一步
            ans=(char)(n%26+'A')+ans;
            n/=26;
        }
        return ans;
    }
};

int main(){}
