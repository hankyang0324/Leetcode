#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int sum[2]={1,2};
        for(int i=3;i<=n;i++){
            sum[(i+1)%2]=sum[0]+sum[1];
        }
        return sum[(n+1)%2];
        // if(n==1) //基本等同于斐波那契，但是recursion太慢
        //     return 1;
        // if(n==2)
        //     return 2;
        // return climbStairs(n-2)+climbStairs(n-1);
    }
};

int main(){}
