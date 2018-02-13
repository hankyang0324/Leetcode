//https://leetcode.com/problems/implement-trie-prefix-tree/description/

//Implement a trie with insert, search, and startsWith methods.

#include <iostream>

using namespace std;

class Trie {
    class TrieNode{
    public:
        TrieNode* next[26];
        bool isWord;
        TrieNode():isWord(false){
            for(int i=0;i<26;i++) next[i]=nullptr;
        }
        ~TrieNode(){
            for(int i=0;i<26;i++) delete next[i];
        }
    };
    TrieNode* root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root=new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* temp=root;
        for(int i=0;i<word.size();i++){
            if(!temp->next[word[i]-'a']) temp->next[word[i]-'a']=new TrieNode();
            temp=temp->next[word[i]-'a'];
        }
        temp->isWord=true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* temp=root;
        for(int i=0;i<word.size();i++){
            if(!temp->next[word[i]-'a']) return false;
            temp=temp->next[word[i]-'a'];
        }
        return temp->isWord;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* temp=root;
        for(int i=0;i<prefix.size();i++){
            if(!temp->next[prefix[i]-'a']) return false;
            temp=temp->next[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */

int main(){}
