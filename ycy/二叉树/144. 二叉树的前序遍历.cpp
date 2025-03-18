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
    vector<int> res;

    void tra(TreeNode *cur)
    {
        if (cur == nullptr)
            return;
        res.push_back(cur->val);
        tra(cur->left);
        rea(cur->right);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        tra(root);
        return res;
    }
};