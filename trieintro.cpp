#include<iostream>
using namespace std;


class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for(int i = 0; i<26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie{
    public:


    Trie(){
        root = new TrieNode('\0');
    }

    TrieNode* root;

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //assuming that our input is in Uppercase
        int index = word[0] - 'A';
        TrieNode* child;

        if(root->children[index] != NULL){
            //element is present
            child = root->children[index];
        }
        else{
            //child is not present create a new child
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursion
        insertUtil(child,word.substr(1));
    }


    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            //word is exhausted
            return root -> isTerminal;

        }
        int index = word[0] - 'A';
        TrieNode* child;
        if(root->children[index]!=NULL){
            //means this character is present 
            child = root->children[index];
        }
        else{
            //means this character is absent
            return false;
        }

        //recursive calls
        return searchUtil(child, word.substr(1));
    }


    bool searchWord(string word){
        return searchUtil(root, word);
    }




};

int main(){

    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    
    cout<<" present or not : "<< t->searchWord("ARM")<<endl;
    cout<<" present or not : "<< t->searchWord("DOING")<<endl;
    cout<<" present or not : "<< t->searchWord("TIME")<<endl;

    return 0;
}