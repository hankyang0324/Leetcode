#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> f(s.size()+1);
        f[0]=true;
        for(int i=1; i <= s.size(); i++){
            for(int j=0; j < i; j++){
                if(f[j] && find(s.substr(j, i-j),wordDict)){
                    f[i] = true;
                    break;
                }
            }
        }
        return f[s.size()];
    }
    bool find(string sub, vector<string>& wordDict) {
        for(int i=0;i<wordDict.size();i++) {
            if(sub==wordDict[i]) return true;
        }
        return false;
    }
};

int main(){}

//DP
