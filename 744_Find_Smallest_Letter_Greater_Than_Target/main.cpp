//https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

//Given a list of sorted characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.

//Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target)
                return letters[i];
        }
        return letters[0];
    }
};

int main(){}
