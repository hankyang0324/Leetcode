//https://leetcode.com/problems/judge-route-circle/description/

//Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

//The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

#include <iostream>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int horizon=0,vertical=0;
        for(int i=0;i<moves.size();i++){
            switch(moves[i]){
                case 'U':vertical++;break;
                case 'D':vertical--;break;
                case 'L':horizon--;break;
                case 'R':horizon++;break;
            }
        }
        return horizon==0&&vertical==0;
    }
};

int main(){}
