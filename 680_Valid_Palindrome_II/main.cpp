//https://leetcode.com/problems/valid-palindrome-ii/description/

//Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.

#include <iostream>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        int count=0;
        while(l<r){
            if(s[l]!=s[r]){//不相同
                count++;//需要删除
                if(count>1)
                    return false;
                if(l+1==r||(s[l+1]==s[r]&&s[l+2]==s[r-1]))//左+1等于右且左+2等于右-1，为了避免acbcac判断为假
                    l++;
                else
                    r--;
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};

int main()
{
    Solution a;
    cout << a.validPalindrome("cupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupucu")<<endl;
}
