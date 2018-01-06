//https://leetcode.com/problems/count-primes/description/

//Count the number of prime numbers less than a non-negative number, n.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<int> isPrime(n,0);
        isPrime[2]=1;
        for(int i=3;i<n;i+=2)
            isPrime[i]=1;
        for(int i=3;i<sqrt(n);i+=2){
            if(isPrime[i]==1){
                for(int j=i*i;j<n;j+=2*i){
                    isPrime[j]=0;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(isPrime[i]==1)
                count++;
        }
        return count;
    }
};

int main(){}

//改进版的eratosthenes
