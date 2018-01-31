//https://leetcode.com/problems/group-anagrams/description/

//Given an array of strings, group anagrams together.

//For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"],
//Return:

//[
//  ["ate", "eat","tea"],
//  ["nat","tan"],
//  ["bat"]
//]

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> elements;
        vector<vector<string>> ans;
        int count=0;
        for(auto str:strs){
            if(elements.count(ordered(str))) ans[elements[ordered(str)]].push_back(str);
            else{
                elements[ordered(str)]=count++;
                vector<string> res={str};
                ans.push_back(res);
            }
        }
        return ans;
    }
    string ordered(string str){
        sort(str.begin(),str.end());
        return str;
    }
};

int main(){}
