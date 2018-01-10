//https://leetcode.com/problems/number-of-segments-in-a-string/description/

//Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

//Please note that the string does not contain any non-printable characters.

//Example:

//Input: "Hello, my name is John"
//Output: 5

#include <iostream>

using namespace std;

class Solution {
public:
    int countSegments(string s) {
        s=' '+s;//统一情况，找空格后不是空格的情况
        int segments=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==' '&&s[i+1]!=' ')//避免连续空格的情况
                segments++;
        }
        return segments;
    }
};

int main(){}
