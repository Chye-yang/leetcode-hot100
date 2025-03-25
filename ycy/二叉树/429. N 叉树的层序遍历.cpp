class Solution {
    public:
        vector<vector<int>> levelOrder(Node* root) {
            queue<Node*> que;
            vector<vector<int>> res;
            if (root == nullptr) {
                return {};
            }
            que.push(root);
            while (!que.empty()) {
                vector<int> res0;
                int size = que.size();
                for (int i = 0; i < size; i++) {
                    Node* current = que.front();
                    res0.push_back(current->val);
                    for (int j = 0; j < current->children.size(); j++) {
                        if (current->children[j]) {
                            que.push(current->children[j]);
                        }
                    }
                    que.pop();
                }
                res.push_back(res0);
            }
            return res;
        }
    };