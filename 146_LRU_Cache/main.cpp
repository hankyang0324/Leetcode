//https://leetcode.com/problems/lru-cache/description/

//Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put.

//get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
//put(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.

//Follow up:
//Could you do both operations in O(1) time complexity?

//Example:

//LRUCache cache = new LRUCache( 2 /* capacity */ );

//cache.put(1, 1);
//cache.put(2, 2);
//cache.get(1);       // returns 1
//cache.put(3, 3);    // evicts key 2
//cache.get(2);       // returns -1 (not found)
//cache.put(4, 4);    // evicts key 1
//cache.get(1);       // returns -1 (not found)
//cache.get(3);       // returns 3
//cache.get(4);       // returns 4

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class LRUCache {
    int capacity;
    unordered_map<int,int> cache;
    vector<int> q;
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
    }

    int get(int key) {
        for(vector<int>::iterator it=q.begin();it!=q.end();++it){
            if((*it)==key){
                it=q.erase(it);
                q.insert(q.begin(),key);
                return cache[key];
            }
        }
        return -1;
    }

    void put(int key, int value) {
        cache[key]=value;
        for(vector<int>::iterator it=q.begin();it!=q.end();++it){
            if((*it)==key){
                it=q.erase(it);
                break;
            }
        }
        q.insert(q.begin(),key);
        if(q.size()>capacity){
            int del=q.back();
            q.pop_back();
            cache.erase(del);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */

int main(){}
