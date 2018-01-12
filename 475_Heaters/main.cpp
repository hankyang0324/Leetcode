//https://leetcode.com/problems/heaters/description/

//Winter is coming! Your first job during the contest is to design a standard heater with fixed warm radius to warm all the houses.

//Now, you are given positions of houses and heaters on a horizontal line, find out minimum radius of heaters so that all houses could be covered by those heaters.

//So, your input will be the positions of houses and heaters seperately, and your expected output will be the minimum radius standard of heaters.

//Note:
//Numbers of houses and heaters you are given are non-negative and will not exceed 25000.
//Positions of houses and heaters you are given are non-negative and will not exceed 10^9.
//As long as a house is in the heaters' warm radius range, it can be warmed.
//All the heaters follow your radius standard and the warm radius will the same.
//Example 1:
//Input: [1,2,3],[2]
//Output: 1
//Explanation: The only heater was placed in the position 2, and if we use the radius 1 standard, then all the houses can be warmed.

#include <iostream>
#include <vector>
using namespace std;

int findRadius(vector<int>& houses, vector<int>& heaters) {
        if(heaters.size()==0)
            return 0;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int j=0;
        int dist=0;
        for(int i=0;i<houses.size();i++){
            while(j+1<heaters.size()&&(abs(houses[i]-heaters[j]))>abs(houses[i]-heaters[j+1])){//注意是>=不是>,不知道为什么
                j++;
            }
            dist=max(dist,abs(houses[i]-heaters[j]));
        }
        return dist;
    }

int main(){}

//循环找加热器到每个房子的最小距离
//取最小值里的最大值


