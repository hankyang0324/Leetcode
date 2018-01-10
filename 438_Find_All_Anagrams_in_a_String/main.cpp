//https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

//Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

//Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

//The order of output does not matter.

//Example 1:

//Input:
//s: "cbaebabacd" p: "abc"

//Output:
//[0, 6]

//Explanation:
//The substring with start index = 0 is "cba", which is an anagram of "abc".
//The substring with start index = 6 is "bac", which is an anagram of "abc".

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // vector<int> findAnagrams(string s, string p) {//超时
    //     unordered_map<char,int> elements;
    //     vector<int> ans;
    //     for(int i=0;i<p.length();i++)
    //         elements[p[i]]++;
    //     for(int i=0;i<(int)s.length()-(int)p.length()+1;i++){//不能直接用s.length()-p.length()，不是整型
    //         if(check(elements,s.substr(i,p.length())))
    //             ans.push_back(i);
    //     }
    //     return ans;
    // }
    // bool check(unordered_map<char,int> elements,string sub)
    // {
    //     for(int i=0;i<sub.length();i++){
    //         if(!elements.count(sub[i])||--elements[sub[i]]<0)
    //             return false;
    //     }
    //     return true;
    // }
    vector<int> findAnagrams(string s, string p) {//Sliding Window algorithm
        vector<int> sv(26,0),pv(26,0);
        vector<int> ans;
        if(s.length()<p.length())
            return ans;
        for(int i=0;i<p.length();i++){
            pv[p[i]-'a']++;
            sv[s[i]-'a']++;
        }
        if(pv==sv)
            ans.push_back(0);
        for(int i=p.length();i<s.length();i++){
            sv[s[i-p.length()]-'a']--;
            sv[s[i]-'a']++;
            if(pv==sv)
                ans.push_back(i-(int)p.length()+1);
        }
        return ans;
    }
};

int main(){}
