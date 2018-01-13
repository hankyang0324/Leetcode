//https://leetcode.com/problems/baseball-game/description/

//Example 1:
//Input: ["5","2","C","D","+"]
//Output: 30
//Explanation:
//Round 1: You could get 5 points. The sum is: 5.
//Round 2: You could get 2 points. The sum is: 7.
//Operation 1: The round 2's data was invalid. The sum is: 5.
//Round 3: You could get 10 points (the round 2's data has been removed). The sum is: 15.
//Round 4: You could get 5 + 10 = 15 points. The sum is: 30.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        int sum=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                sum-=scores.back();
                scores.pop_back();
            }
            else if(ops[i]=="D"){
                int score=2*scores.back();
                sum+=score;
                scores.push_back(score);
            }
            else if(ops[i]=="+"){
                int score=scores.back()+scores[(int)scores.size()-2];
                sum+=score;
                scores.push_back(score);
            }
            else{
                int score=stoi(ops[i]);
                sum+=score;
                scores.push_back(score);
            }
        }
        return sum;
    }
};

int main(){}

//stack
