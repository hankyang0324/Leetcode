//https://leetcode.com/problems/set-mismatch/description/

//The set S originally contains numbers from 1 to n. But unfortunately, due to the data error, one of the numbers in the set got duplicated to another number in the set, which results in repetition of one number and loss of another number.

//Given an array nums representing the data status of this set after the error. Your task is to firstly find the number occurs twice and then find the number that is missing. Return them in the form of an array.

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size=nums.size();
        int dup,mis;
        map<int,int> elements;
        for(int i=1;i<=size;i++)
            elements[i]=0;
        for(int n:nums){
            elements[n]++;
            if(elements[n]==2)
                dup=n;
        }
        for(auto& e:elements){
            if(e.second==0){
                mis=e.first;
                break;
            }
        }
        return {dup,mis};
    }
};

int main(){}
