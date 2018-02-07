//https://leetcode.com/problems/course-schedule/discuss/58509/18-22-lines-C++-BFSDFS-Solutions

//Find the total area covered by two rectilinear rectangles in a 2D plane.

//Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.

#include <iostream>

using namespace std;

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int sumOfTwo=(C-A)*(D-B)+(G-E)*(H-F);
        int I=max(A,E);
        int J=max(B,F);
        int K=min(C,G);
        int L=min(D,H);
        if(I>=K || J>=L) return sumOfTwo;
        else return sumOfTwo-(K-I)*(L-J);
    }
};

int main(){}
