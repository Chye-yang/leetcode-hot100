#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution {
    private:
        vector<vector<int>> result; // 存放符合条件结果的集合
        vector<int> path; // 用来存放符合条件结果
        void backtracking(int n, int k, int startIndex) {
            if (path.size() == k) {
                result.push_back(path);
                return;
            }
            for (int i = startIndex; i <= n; i++) {
                path.push_back(i); // 处理节点
                backtracking(n, k, i + 1); // 递归
                path.pop_back(); // 回溯，撤销处理的节点
            }
        }
    public:
        vector<vector<int>> combine(int n, int k) {
            result.clear(); // 可以不写
            path.clear();   // 可以不写
            backtracking(n, k, 1);
            return result;
        }
};

int main() {
    Solution solution;
    int n = 4, k = 2; // 测试用例：从 1 到 4 中选 2 个数
    vector<vector<int>> combinations = solution.combine(n, k);

    cout << "Combinations of " << n << " choose " << k << " are:" << endl;
    for (const auto& combination : combinations) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}