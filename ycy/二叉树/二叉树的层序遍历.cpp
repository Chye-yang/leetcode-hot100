#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        queue<TreeNode *> que;
        if (root == nullptr)
        {
            return res;
        }
        else
        {
            que.push(root);
        }
        
        while (!que.empty())
        {
            int size = que.size();
            vector<int> res0;
            for (int i = 0; i < size; i++)
            {
                TreeNode* tmp=que.front();
                que.pop();
                res0.push_back(tmp->val);

                if (tmp->left)
                {
                    que.push(tmp->left);
                }
                if(tmp->right){
                    que.push(tmp->right);
                }
            }
            res.push_back(res0);
        }
        return res;
    }
};