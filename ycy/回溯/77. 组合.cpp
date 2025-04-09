#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;


/*
回溯三部曲：
递归函数参数的返回值
确定终止条件
单层递归逻辑
*/
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
            backtracking(n, k, 1);
            return result;
        }
    };