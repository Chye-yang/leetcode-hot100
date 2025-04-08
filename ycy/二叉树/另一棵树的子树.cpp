#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

  struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
    public:

        bool comp(TreeNode* t1,TreeNode * t2){
            if(t1->val==t2->val){
                
            }
            if(t1->val!=t2->val){

            }
        }
        bool isSubtree(TreeNode* root, TreeNode* subRoot) {
            if(subRoot==nullptr){
                return true;
            }
            if(root==nullptr){
                return false;
            }

            

        }
    };
