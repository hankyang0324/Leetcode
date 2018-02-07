//https://leetcode.com/problems/course-schedule/description/

//There are a total of n courses you have to take, labeled from 0 to n - 1.

//Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

//Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?

//For example:

//2, [[1,0]]
//There are a total of 2 courses to take. To take course 1 you should have finished course 0. So it is possible.

//2, [[1,0],[0,1]]
//There are a total of 2 courses to take. To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.

//Note:
//The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.
//You may assume that there are no duplicate edges in the input prerequisites.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph=makeGraph(numCourses,prerequisites);
        vector<int> degree=indegree(graph);
        for(int i=0;i<numCourses;i++){
            int j=0;
            for(;j<numCourses;j++){
                if(degree[j]==0) break;
            }
            if(j==numCourses) return false;
            degree[j]=-1;
            for(int course:graph[j]){
                degree[course]--;
            }
        }
        return true;
    }
    vector<unordered_set<int>> makeGraph(int numCourses,vector<pair<int, int>>& prerequisites) {
        vector<unordered_set<int>> graph(numCourses);
        for(auto pre:prerequisites) {
            graph[pre.second].insert(pre.first);
        }
        return graph;
    }
    vector<int> indegree(vector<unordered_set<int>>& graph) {
        vector<int> degree(graph.size(),0);
        for(auto gra:graph){
            for(int course:gra){
                degree[course]++;
            }
        }
        return degree;
    }
};

int main(){}

//topology loop
//用vector<set> graph建立每个顶点链接的点
//用vector degree建立每个顶点被链接的次数
//显然如果没有loop在其中的话至少有一个点被链接次数为0，否则有环，false
//把这个点去掉，然后与把这个点链接的点的被链接次数减1
//显然如果没有loop在其中的话至少有一个点被链接次数为0，否则有环，false
// 。。。。。。
//最后一个点被链接次数为0，true
