//https://leetcode.com/problems/implement-strstr/description/

//Implement strStr().

//Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

//Example 1:

//Input: haystack = "hello", needle = "ll"
//Output: 2

#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizeh=haystack.size(),sizen=needle.size();
        for(int i=0;i<sizeh-sizen+1;i++){
            int count=0;
            for(int j=i;j<sizen+i;j++){
                if(haystack[j]!=needle[j-i])
                    break;
                count++;
            }
            if(count==sizen)
                return i;
        }
        return -1;
    }
};

int main(){}
