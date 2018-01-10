//https://leetcode.com/problems/string-compression/description/

//Given an array of characters, compress it in-place.

//The length after compression must always be smaller than or equal to the original array.

//Every element of the array should be a character (not int) of length 1.

//After you are done modifying the input array in-place, return the new length of the array.


//Follow up:
//Could you solve it using only O(1) extra space?


//Example 1:
//Input:
//["a","a","b","b","c","c","c"]

//Output:
//Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int pos=0;
        int pre=0;
        for(int i=0;i<chars.size();i++){
            if(i==chars.size()-1||chars[i]!=chars[i+1]){
                chars[pos++]=chars[i];
                int len=i+1-pre;
                pre=i+1;
                if(len>1){
                    string s=to_string(len);
                    for(int j=0;j<s.size();j++)
                        chars[pos+j]=s[j];
                    pos+=s.size();
                }
            }
        }
        return pos;
    }
};

int main(){}
