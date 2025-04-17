#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        queue<TreeNode *> que;
        vector<vector<int>> res;
        if(root ==nullptr){return {};}
        que.push(root);
        while (!que.empty())
        {   
            vector<int> res0;
            int size = que.size();
            for(int i=0;i<size;i++){
                res0.push_back(que.front()->val);
                if(que.front()->left) que.push(que.front()->left);
                if(que.front()->right) que.push(que.front()->right);
                que.pop();
            }
            res.push_back(res0);
        }
        return res;
    }
};