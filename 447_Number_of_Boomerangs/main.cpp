//https://leetcode.com/problems/number-of-boomerangs/description/

//Given n points in the plane that are all pairwise distinct, a "boomerang" is a tuple of points (i, j, k) such that the distance between i and j equals the distance between i and k (the order of the tuple matters).

//Find the number of boomerangs. You may assume that n will be at most 500 and coordinates of points are all in the range [-10000, 10000] (inclusive).

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int size=points.size();
        int ans=0;
        for(int i=0;i<size;i++){
            unordered_map<long,int> dist(size);
            for(int j=0;j<size;j++){
                if(i==j)
                    continue;
                int dx=points[i].first-points[j].first;
                int dy=points[i].second-points[j].second;
                int key=dy*dy+dx*dx;
                dist[key]++;
            }
            for(auto& d:dist){
                if(d.second>1)
                    ans+=d.second*(d.second-1);
            }
        }
        return ans;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

//1.双循环遍历每个点与其余点的距离
//2.内循环1中用map记录该点到其余点的每个距离出现的次数
//3.内循环2中遍历map中该点到其余点的距离，如果该距离出现次数n超过两次，加上n(n-1)种组合
