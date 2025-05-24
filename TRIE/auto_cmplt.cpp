#include <bits/stdc++.h>

using namespace std;

struct TrieNode{
    TrieNode *children[26];
    bool isWordEnd;
};

TrieNode *getNode(void){
    TrieNode*pNode=new TrieNode;
    pNode->isWordEnd=false;
    for(int i=0; i<26; i++)
        pNode->children[i]=NULL;
    
    return pNode;
}

void insert(TrieNode *root, const string &key){
    TrieNode *pCrawl=root;

    for(int i=0; i<key.length(); i++){
        int idx=key[i]-'a';
        if(!pCrawl->children[idx])
            pCrawl->children[idx]=getNode();
        
        pCrawl=pCrawl->children[idx];
    }
    pCrawl->isWordEnd=true;
}

bool search(TrieNode *root, const string &key){
    int n=key.length();
    TrieNode *pCrawl=root;

    for(int i=0; i<n; i++){
        int idx=key[i]-'a';
        if(!pCrawl->children[idx])
            return false;
        pCrawl=pCrawl->children[idx];
    }

    return (pCrawl && pCrawl->isWordEnd);
}

bool isLastNode(TrieNode *root){
    for(int i=0; i<26; i++){
        if(root->children[i])
            return 0;
    }
    return 1;
}

void suggestionsRec(TrieNode *root, string currPref){
    if(root->isWordEnd){
        cout<<currPref<<endl;
    }

    if(isLastNode(root))
        return;
    
    for(int i=0; i<26; i++){
        if(root->children[i]){
            currPref.push_back(97+i);
            suggestionsRec(root->children[i], currPref);
        }
    }
}

int printAutoSuggestions(TrieNode* root, const string query) 
{ 
    struct TrieNode* pCrawl = root; 

    int level; 
    int n = query.length(); 
    for (level = 0; level < n; level++) 
    { 
        int index = query[level]-'a';

        if (!pCrawl->children[index]) 
            return 0; 

        pCrawl = pCrawl->children[index]; 
    } 

    bool isWord = (pCrawl->isWordEnd == true); 

    bool isLast = isLastNode(pCrawl); 

 
    if (isWord && isLast) 
    { 
        cout << query << endl; 
        return -1; 
    } 

    if (!isLast) 
    { 
        string prefix = query; 
        suggestionsRec(pCrawl, prefix); 
        return 1; 
    } 
}

int main() 
{ 
    struct TrieNode* root = getNode(); 
    insert(root, "hello"); 
    insert(root, "dog"); 
    insert(root, "hell"); 
    insert(root, "cat"); 
    insert(root, "a"); 
    insert(root, "hel"); 
    insert(root, "help"); 
    insert(root, "helps"); 
    insert(root, "helping"); 
    int comp = printAutoSuggestions(root, "hel"); 

    if (comp == -1) 
        cout << "No other strings found with this prefix\n"; 

    else if (comp == 0) 
        cout << "No string found with this prefix\n"; 

    return 0; 
}