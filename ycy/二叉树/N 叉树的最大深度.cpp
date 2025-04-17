#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Node {
    public:
        int val;
        vector<Node*> children;
    
        Node() {}
    
        Node(int _val) {
            val = _val;
        }
    
        Node(int _val, vector<Node*> _children) {
            val = _val;
            children = _children;
        }
    };
    
    class Solution {
    public:

        int getdp(Node* r1){
            if(r1==nullptr){
                return 0;
            }
            int mx=0;
            for(int i=0;i<r1->children.size();i++){
                int tmx=getdp(r1->children[i]);
                mx=max(mx,tmx);
            }
            return mx+1;
        }

        int maxDepth(Node* root) {
            return getdp(root);
        }
    };