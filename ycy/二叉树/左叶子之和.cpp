#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int sum = 0;
    void getsum(TreeNode *node)
    {   
        if(node==nullptr){
            return;
        }
        if(node->left!=nullptr&&node->left->left==nullptr&&node->right->right==nullptr){
            sum+=node->left->val;
        }
        getsum(node->left);
        getsum(node->right);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        getsum(root);

        return sum;
    }
};