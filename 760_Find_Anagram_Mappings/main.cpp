//https://leetcode.com/problems/find-anagram-mappings/description/

//Given two lists Aand B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

//We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

//These lists A and B may contain duplicates. If there are multiple answers, output any of them.

//For example, given

//A = [12, 28, 46, 32, 50]
//B = [50, 12, 32, 46, 28]
//We should return
//[1, 4, 3, 2, 0]

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> pos;
        vector<int> mapping;
        for(int i=0;i<B.size();i++)
            pos[B[i]]=i;
        for(int i=0;i<A.size();i++)
            mapping.push_back(pos[A[i]]);
        return mapping;
    }
};

int main(){}
