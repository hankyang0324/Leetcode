#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        vector<unordered_set<char>>keyboard={{'q','w','e','r','t','y','u','i','o','p'},
                                              {'a','s','d','f','g','h','j','k','l'},
                                              {'z','x','c','v','b','n','m'}};
        for(int i=0;i<words.size();i++){
            int row=0;
            for(int j=0;j<3;j++){
                if(keyboard[j].count(words[i][0])||keyboard[j].count(words[i][0]+32)){
                    row=j;
                    break;
                }
            }
            int find=1;
            for(int j=0;j<words[i].length();j++){
                if(!keyboard[row].count(words[i][j])&&!keyboard[row].count(words[i][j]+32)){
                    find=0;
                    break;
                }
            }
            if(find==1)
                ans.push_back(words[i]);
        }
        return ans;
    }
};

int main(){}
