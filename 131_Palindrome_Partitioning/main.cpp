//https://leetcode.com/problems/palindrome-partitioning/description/

//Given a string s, partition s such that every substring of the partition is a palindrome.

//Return all possible palindrome partitioning of s.

//For example, given s = "aab",
//Return

//[
//  ["aa","b"],
//  ["a","a","b"]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        if(s.size()==0) return res;
        vector<string> ans;
        partition(s,0,res,ans);
        return res;
    }
    void partition(string& s,int index,vector<vector<string>>& res,vector<string>& ans){
        if(index==s.size()) {
            res.push_back(ans);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(ispalindrome(s,index,i)){
                ans.push_back(s.substr(index,i-index+1));
                partition(s,i+1,res,ans);
                ans.pop_back();
            }
        }
    }
    bool ispalindrome(string& s,int begin,int end){
        while(begin<=end){
            if(s[begin++]!=s[end--]) return false;
        }
        return true;
    }
};

int main(){}

//backtracking & palindrome
