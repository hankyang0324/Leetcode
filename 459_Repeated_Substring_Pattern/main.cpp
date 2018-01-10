//https://leetcode.com/problems/repeated-substring-pattern/description/

//Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.
//Example 1:
//Input: "abab"

//Output: True

//Explanation: It's the substring "ab" twice.

#include <iostream>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=1;i<=s.size()/2;i++){
            if(s.size()%i==0){
                if(s==sub(s,i))
                    return true;
            }
        }
        return false;
    }
    string sub(string& s,int pos){//把前pos个字符调到原字符串末尾，如果新字符串依旧与原字符串相同，说明原字符串由前pos个元素循环构成
        string headToTail=s.substr(pos);
        headToTail+=s.substr(0,pos);
        return headToTail;
    }
};

int main(){}
