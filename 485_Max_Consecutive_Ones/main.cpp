//Given a binary array, find the maximum number of consecutive 1s in this array.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int longest=0;
        int consecutive=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]==1){
                consecutive++;
                if(i==size-1){
                    if(longest<consecutive)
                        longest=consecutive;
                }
            }
            else{
                if(consecutive>0){
                    if(longest<consecutive)
                        longest=consecutive;
                    consecutive=0;
                }
            }
        }
        return longest;
    }
};

int main(){}
