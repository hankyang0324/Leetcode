//https://leetcode.com/problems/combination-sum-iii/discuss/

//Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.

//Example 1:

//Input: k = 3, n = 7

//Output:

//[[1,2,4]]

//Example 2:

//Input: k = 3, n = 9

//Output:

//[[1,2,6], [1,3,5], [2,3,4]]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> res;
        combination(ans,res,k,n);
        return ans;
    }
    void combination(vector<vector<int>> &ans,vector<int> res,int k,int n){
        if(n<0) return;
        if(k==0 && n==0){
            ans.push_back(res);
            return;
        }
        for(int i=res.empty()?1:res.back()+1;i<=9;i++){//从小到大排，避免重复
            res.push_back(i);
            combination(ans,res,k-1,n-i);
            res.pop_back();
        }
    }
};

int main(){}

//backtracking
