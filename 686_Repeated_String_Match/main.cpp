//https://leetcode.com/problems/repeated-string-match/description/

//Given two strings A and B, find the minimum number of times A has to be repeated such that B is a substring of it. If no such solution, return -1.

//For example, with A = "abcd" and B = "cdabcdab".

//Return 3, because by repeating A three times (“abcdabcdabcd”), B is a substring of it; and B is not a substring of A repeated two times ("abcdabcd").

//Note:
//The length of A and B will be between 1 and 10000.

#include <iostream>

using namespace std;

class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int sizeA=A.size(),sizeB=B.size();
        int nums=sizeB/sizeA+2;//如果nums个A的循环都不能包含B，则一定不包含
        string As="";
        for(int i=0;i<nums;i++)
            As+=A;
        if(As.find(B)==As.npos)
            return -1;
        else{
            if(As.substr(2*sizeA).find(B)!=As.npos)
                return nums-2;
            else if(As.substr(1*sizeA).find(B)!=As.npos)
                return nums-1;
            else
                return nums;
        }
    }
};

int main(){}
