    /**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     * };
     */
    #include <numeric> 

    class Solution
    {
    public:
        vector<double> averageOfLevels(TreeNode *root)
        {

            {
                queue<TreeNode *> que;
                vector<double> res;
                if(root ==nullptr){return {};}
                que.push(root);
                while (!que.empty())
                {   
                    int sum=0;
                    int size = que.size();
                    for(int i=0;i<size;i++){
                        sum+=que.val;
                        if(que.front()->left) que.push(que.front()->left);
                        if(que.front()->right) que.push(que.front()->right);
                        que.pop();
                    }
                    

                    res.push_back((double)sum/size);
                }
                return res;
            }

        }
    };

