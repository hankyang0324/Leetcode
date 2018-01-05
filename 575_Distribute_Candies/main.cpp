//https://leetcode.com/problems/distribute-candies/description/

//Given an integer array with even length, where different numbers in this array represent different kinds of candies. Each number means one candy of the corresponding kind. You need to distribute these candies equally in number to brother and sister. Return the maximum number of kinds of candies the sister could gain.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> kind;
        for(int candy:candies)
            kind.insert(candy);
        if(kind.size()>=candies.size()/2)
            return candies.size()/2;
        else
            return kind.size();
    }
};

int main(){}
