//https://leetcode.com/problems/different-ways-to-add-parentheses/description/

//Given a string of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. The valid operators are +, - and *.

//Example 1
//Input: "2-1-1".

//((2-1)-1) = 0
//(2-(1-1)) = 2
//Output: [0, 2]

//Example 2
//Input: "2*3-4*5"

//(2*(3-(4*5))) = -34
//((2*3)-(4*5)) = -14
//((2*(3-4))*5) = -10
//(2*((3-4)*5)) = -10
//(((2*3)-4)*5) = 10
//Output: [-34, -14, -10, -10, 10]

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> res;
        for (int i = 0; i < input.size(); ++i) {
            if (input[i] < '0') {
                vector<int> v1 = diffWaysToCompute(input.substr(0, i));
                vector<int> v2 = diffWaysToCompute(input.substr(i + 1));
                for (auto i1 : v1)
                    for (auto i2 : v2)
                        switch (input[i]) {
                            case '+': res.push_back(i1 + i2); break;
                            case '-': res.push_back(i1 - i2); break;
                            case '*': res.push_back(i1 * i2);
                        }
                    }
                }
        if (res.empty()) res.push_back(stoi(input));
        return res;
    }
};

int main(){}

//每一个运算符都有可能是最后一个被执行的
