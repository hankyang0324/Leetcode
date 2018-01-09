//https://leetcode.com/problems/happy-number/description/

//Write an algorithm to determine if a number is "happy".

//A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

//Example: 19 is a happy number

//12 + 92 = 82
//82 + 22 = 68
//62 + 82 = 100
//12 + 02 + 02 = 1

#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> elements;
        string a=to_string(n);
        while(a!="1"){
            int sum=0;
            for(int i=0;i<a.length();i++)
                sum+=(a[i]-'0')*(a[i]-'0');
            if(elements.count(sum))
                return false;
            elements.insert(sum);
            a=to_string(sum);
        }
        return true;
    }
};

int main(){}
