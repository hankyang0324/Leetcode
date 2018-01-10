//https://leetcode.com/problems/valid-palindrome/description/

//Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

//For example,
//"A man, a plan, a canal: Panama" is a palindrome.
//"race a car" is not a palindrome.

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string pure=extract(s);
        int l=0,r=pure.size()-1;
        while(l<r){
            if(pure[l]!=pure[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    string extract(string s){
        string pure="";
        for(int i=0;i<s.size();i++){
            if(('a'<=s[i]&&s[i]<='z')||('0'<=s[i]&&s[i]<='9'))
                pure+=s[i];
            else if('A'<=s[i]&&s[i]<='Z')
                pure+=s[i]+32;
        }
        return pure;
    }
};

int main(){}
