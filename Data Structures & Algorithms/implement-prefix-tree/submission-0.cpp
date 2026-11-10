struct TrieNode{
    TrieNode* children[26] = {};
    bool isEnd = false;
};


class PrefixTree {
private:
    TrieNode* root;
public:
    PrefixTree() {
        root = new TrieNode();
        
    }
    
    void insert(string word) {
        TrieNode* node = root;

        for(char c : word){
            int index = c - 'a';

            if(node->children[index] == nullptr){
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->isEnd = true;
        
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char c : word){
            int index = c - 'a';

            if(node->children[index] == nullptr){
                return false;
            }
            node = node->children[index];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char c : prefix){
            int index = c - 'a';

            if(node->children[index] == nullptr){
                return false;
            }
            node = node->children[index];
        }
        return true;
    }
};
