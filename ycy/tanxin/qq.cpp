#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

const int N = 10;
bool graph[N][N];   // 邻接矩阵表示边是否存在
int skip[N][N];     // skip[i][j] 表示 i->j 是否需要跳过某中间点
bitset<N> visited;  // 标记哪些点访问过
vector<int> path;   // 当前路径
vector<vector<int>> result; // 所有合法路径
int m; // 边数

void init_skip_table() {
    // 构造跳过限制表，九宫格跳点逻辑
    skip[1][3] = skip[3][1] = 2;
    skip[1][7] = skip[7][1] = 4;
    skip[3][9] = skip[9][3] = 6;
    skip[7][9] = skip[9][7] = 8;
    skip[1][9] = skip[9][1] = 5;
    skip[3][7] = skip[7][3] = 5;
    skip[4][6] = skip[6][4] = 5;
    skip[2][8] = skip[8][2] = 5;
    skip[7][3] = skip[3][7] = 5;
    skip[9][1] = skip[1][9] = 5;
    skip[6][4] = skip[4][6] = 5;
    skip[8][2] = skip[2][8] = 5;
}

void dfs(int u) {
    if (path.size() == m + 1) {
        result.push_back(path);
        return;
    }

    for (int v = 1; v <= 9; ++v) {
        if (visited[v]) continue;
        if (!graph[u][v]) continue;

        int s = skip[u][v];
        if (s && !visited[s]) continue; // 如果必须经过中间点但中间点未访问，非法

        visited[v] = true;
        path.push_back(v);
        dfs(v);
        path.pop_back();
        visited[v] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    init_skip_table();

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = graph[v][u] = true;
    }

    for (int i = 1; i <= 9; ++i) {
        visited.reset();
        path.clear();
        visited[i] = true;
        path.push_back(i);
        dfs(i);
    }

    // 按字典序排序
    sort(result.begin(), result.end());

    // 输出
    for (const auto& vec : result) {
        for (int i = 0; i < vec.size(); ++i) {
            cout << vec[i];
            if (i != vec.size() - 1) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}

