//https://leetcode.com/problems/merge-sorted-array/description/

//Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

//Note:
//You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int j=0;
        if(m==0)
            for(int i=0;i<n;i++)
                nums1[i]=nums2[i];
        else if(n!=0){
            for(int i=0;i<m;i++){
                while(nums2[j]<=nums1[i]&&j<n){
                    ans[i+j]=nums2[j];
                    j++;
                }
                ans[i+j]=nums1[i];
            }
            for(int k=j;k<n;k++)//不要忘了末尾插入num2[rest]>num1[m-1]的情况
                ans[m+k]=nums2[k];
            for(int i=0;i<m+n;i++)
                nums1[i]=ans[i];
        }
    }
};

int main(){}

//注意m或n为0的情况

