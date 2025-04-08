#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int getdp(TreeNode *node)
    {
        if (node == nullptr)
        {
            return 0;
        }
        int ld = getdp(node->left);
        int rd = getdp(node->right);
        return max(ld, rd) + 1;
    }

    int maxDepth(TreeNode *root)
    {
        return getdp(root);
    }
};