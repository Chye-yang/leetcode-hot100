

class Solution
{
public:
    vector<int> rightSideView(TreeNode* root) {
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
        vector<int> res9;
        for(auto it :res){
            res9.push_back(it[it.size()-1]);
        }
        return res9;
  }  }
};