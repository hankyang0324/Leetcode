//https://leetcode.com/problems/longest-common-prefix/description/

//Write a function to find the longest common prefix string amongst an array of strings.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string ans=strs[0];
        for(int i=0;i<strs.size();i++)
            ans=prefix(ans,strs[i]);
        return ans;
    }
    string prefix(string& a,string& b){
        int i=0;
        int size=min((int)a.size(),(int)b.size());
        string ans="";
        while(i<size&&a[i]==b[i]){
            ans+=a[i++];
        }
        return ans;
    }
};

int main(){}
