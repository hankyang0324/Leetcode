//https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

//Given a digit string, return all possible letter combinations that the number could represent.

//A mapping of digit to letters (just like on the telephone buttons) is given below.

//Input:Digit string "23"
//Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string charmap[10] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        if(digits.size()==0)
            return ans;
        ans.push_back("");
        for(int i=0;i<digits.size();i++){
            int num=digits[i]-'0';
            vector<string> temp;
            for(int i=0;i<charmap[num].size();i++){
                for(int j=0;j<ans.size();j++){
                    temp.push_back(ans[j]+charmap[num][i]);
                }
            }
            ans=temp;
        }
        return ans;
    }
};

int main(){}
