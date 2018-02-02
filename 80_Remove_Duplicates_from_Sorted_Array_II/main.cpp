#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> elements;
        int length=0;
        for(int num:nums){
            elements[num]++;
            length++;
            if(elements[num]>2){
                length--;
                elements[num]=2;
            }
        }
        int i=0;
        for(map<int,int>::iterator it=elements.begin();it!=elements.end();++it){//不能用unordered_map, 顺序不对
            int j=it->second;
            while(j>0){
                nums[i]=it->first;
                i++;
                j--;
            }
        }
        return length;
    }
};

int main(){}
