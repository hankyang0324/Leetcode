//Input: numbers={2, 7, 11, 15}, target=9
//Output: index1=1, index2=2
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int l=0;
        int r=numbers.size()-1;
        while(l<r)
        {
            int sum=numbers[l]+numbers[r];
            if(sum==target){
                vector<int> ans{l+1,r+1};
                return ans;
            }
            else if(sum>target)
                r--;
            else
                l++;
        }
        return ans;
    }
};

int main(){}
//左右逼近
