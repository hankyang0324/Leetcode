//https://leetcode.com/problems/1-bit-and-2-bit-characters/description/

//We have two special characters. The first character can be represented by one bit 0. The second character can be represented by two bits (10 or 11).

//Now given a string represented by several bits. Return whether the last character must be a one-bit character or not. The given string will always end with a zero.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int size=bits.size();
        for(int i=0;i<size;i++){
            if(bits[i]==1){
                i++;
                if(i==size-1)
                    return false;
            }
        }
        return true;
    }
};

int main(){}

//从头开始，1的话往后跳2位，1的话往后跳1位
//如果1往后跳1位是最后一个说明是two-bits，否则one-bit
