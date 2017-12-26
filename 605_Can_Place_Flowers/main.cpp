//https://leetcode.com/problems/can-place-flowers/description/

//Suppose you have a long flowerbed in which some of the plots are planted and some are not. However, flowers cannot be planted in adjacent plots - they would compete for water and both would die.

//Given a flowerbed (represented as an array containing 0 and 1, where 0 means empty and 1 means not empty), and a number n, return if n new flowers can be planted in it without violating the no-adjacent-flowers rule.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
        int count=0;
        for(int i=0;i<size;i++){
            if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==size-1||flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
            }
        }
        return count>=n;
    }
};

int main(){}

//if判定条件需要考虑每种可能情况。 “||”号两边条件顺序不能反！
