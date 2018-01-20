//https://leetcode.com/problems/zigzag-conversion/description/

//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

//P   A   H   N
//A P L S I I G
//Y   I   R
//And then read line by line: "PAHNAPLSIIGYIR"
//Write the code that will take a string and make this conversion given a number of rows:

//string convert(string text, int nRows);
//convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string ans="";
        int size=s.size();
        int nums=2*numRows-2;
        for(int i=0;i<size;i+=nums){
            ans+=s[i];
        }
        for(int i=1;i<numRows-1;i++){
            for(int j=i;j<size;j+=nums){
                ans+=s[j];
                if(nums-j%nums+j/nums*nums<size)
                    ans+=s[nums-j%nums+j/nums*nums];
            }
        }
        for(int i=numRows-1;i<size;i+=nums){
            ans+=s[i];
        }
        return ans;
    }
};

int main(){}
