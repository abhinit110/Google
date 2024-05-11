/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

class Trie {
    

public:

struct Node
{
    Node* links[26];
    bool flag=false;
    bool containsKey(char ch)
    {
        return (links[ch-'a']!=NULL);
    }
    Node* get(char ch)
    {
        return links[ch-'a'];
    }
};
Node* root;
    /** Initialize your data structure here. */
    Trie() {
        root=new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containsKey(word[i]))
            {
               node-> links[word[i]-'a']=new Node();
            }
            node=node->get(word[i]);
        }
        node->flag=true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containsKey(word[i]))
            {
                return false;
            }
            node=node->get(word[i]);
        }
        return (node->flag==true);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
         Node* node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containsKey(word[i]))
            {
                return false;
            }
            node=node->get(word[i]);
        }
        return true;
    }
};
