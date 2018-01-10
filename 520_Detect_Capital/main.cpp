//https://leetcode.com/problems/detect-capital/description/

//Given a word, you need to judge whether the usage of capitals in it is right or not.

//We define the usage of capitals in a word to be right when one of the following cases holds:

//All letters in this word are capitals, like "USA".
//All letters in this word are not capitals, like "leetcode".
//Only the first letter in this word is capital if it has more than one letter, like "Google".
//Otherwise, we define that this word doesn't use capitals in a right way.

#include <iostream>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if(uppercase(word[0])){
            int count=1;
            for(int i=1;i<word.size();i++){
                if(uppercase(word[i]))
                    count++;
            }
            if(count==1||count==word.size())
                return true;
            else
                return false;
        }
        else{
            for(int i=1;i<word.size();i++){
                if(uppercase(word[i]))
                    return false;
            }
            return true;
        }
    }
    bool uppercase(char c){
        if('A'<=c&&c<='Z')
            return true;
        else
            return false;
    }
};

int main(){}
