//https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

//Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

//Example 1:
//Input: "Let's take LeetCode contest"
//Output: "s'teL ekat edoCteeL tsetnoc"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        vector<string> splitWords=split(s);
        if(splitWords.size()==0)
            return ans;
        ans+=reverseString(splitWords[0]);
        for(int i=1;i<splitWords.size();i++)
            ans+=" "+reverseString(splitWords[i]);
        return ans;
    }
    vector<string> split(string& str){
        int begin=0;
        vector<string> sub;
        for(int i=0;i<=str.length();i++){
            if(str[i]==' '||str[i]=='\0'){
                sub.push_back(str.substr(begin,i-begin));
                begin=i+1;
            }
        }
        return sub;
    }
    string reverseString(string& str){
        int l=0,r=str.size()-1;
        while(l<r)
            swap(str[l++],str[r--]);
        return str;
    }
};

int main(){}
