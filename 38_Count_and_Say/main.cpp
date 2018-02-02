//https://leetcode.com/problems/count-and-say/description/

//The count-and-say sequence is the sequence of integers with the first five terms as following:

//1.     1
//2.     11
//3.     21
//4.     1211
//5.     111221
//1 is read off as "one 1" or 11.
//11 is read off as "two 1s" or 21.
//21 is read off as "one 2, then one 1" or 1211.
//Given an integer n, generate the nth term of the count-and-say sequence.

//Note: Each term of the sequence of integers will be represented as a string.

//Example 1:

//Input: 1
//Output: "1"
//Example 2:

//Input: 4
//Output: "1211"

#include <iostream>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str=countAndSay(n-1)+"0";
        string ans="";
        int count=1;
        for(int i=0;i<str.size()-1;i++){
            if(str[i+1]==str[i]) count++;
            else {
                ans+='0'+count;
                ans+=str[i];
                count=1;
            }
        }
        return ans;
    }
};

int main(){}
