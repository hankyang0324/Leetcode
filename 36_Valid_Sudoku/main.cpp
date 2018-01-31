//https://leetcode.com/problems/valid-sudoku/description/

//Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.

//The Sudoku board could be partially filled, where empty cells are filled with the character '.'.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return isValid(board,0,0)&&isValid(board,3,1)&&isValid(board,6,2)&&isValid(board,1,3)&&isValid(board,4,4)&&isValid(board,7,5)&&isValid(board,2,6)&&isValid(board,5,7)&&isValid(board,8,8);
    }
    bool isValid(vector<vector<char>>& board,int row,int col) {
        set<char> elements;
        for(int i=0;i<9;i++){
            if(board[i][col]!='.'){
                if(elements.count(board[i][col])) return false;
                elements.insert(board[i][col]);
            }
        }
        elements.clear();
        for(int i=0;i<9;i++){
            if(board[row][i]!='.'){
                if(elements.count(board[row][i])) return false;
                elements.insert(board[row][i]);
            }
        }
        elements.clear();
        int r=(row/3)*3,c=(col/3)*3;
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                if(board[i][j]!='.'){
                    if(elements.count(board[i][j])) return false;
                    elements.insert(board[i][j]);
                }
            }
        }
        return true;
    }
};

int main(){}
