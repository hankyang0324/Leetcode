//https://leetcode.com/problems/palindrome-number/description/

//Determine whether an integer is a palindrome. Do this without extra space.

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x>0&&x%10==0))
            return false;
        int sum=0;
        while(x>sum){
            sum=sum*10+x%10;
            if(sum==x)
                break;
            x/=10;
        }
        return sum==x;
    }
};

int main(){}

//负数、大于0且末位为0单独考虑
