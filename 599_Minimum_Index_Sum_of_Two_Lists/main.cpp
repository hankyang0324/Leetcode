//https://leetcode.com/problems/minimum-index-sum-of-two-lists/description/

//Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.

//You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> rest;
        for(int i=0;i<list1.size();i++)
            rest[list1[i]]=i;
        int least=INT_MAX;
        vector<string> ans;
        for(int i=0;i<list2.size();i++){
            if(rest.count(list2[i])){
                if(least>rest[list2[i]]+i){
                    least=rest[list2[i]]+i;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(least==rest[list2[i]]+i){
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};

int main(){}
