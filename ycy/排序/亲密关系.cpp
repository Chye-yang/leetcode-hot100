#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

long long inverse_pairs(vector<int>& y) {
    int n = y.size();
    vector<int> temp(n);
    
    function<long long(int, int)> merge_sort = [&](int l, int r) -> long long {
        if (r - l <= 1) return 0;
        int m = (l + r) / 2;
        long long inv = merge_sort(l, m) + merge_sort(m, r);

        int i = l, j = m, k = l;
        while (i < m && j < r) {
            if (y[i] <= y[j]) {
                temp[k++] = y[i++];
            } else {
                temp[k++] = y[j++];
                inv += m - i;  // 逆序对出现
            }
        }
        while (i < m) temp[k++] = y[i++];
        while (j < r) temp[k++] = y[j++];
        for (int t = l; t < r; ++t) y[t] = temp[t];
        return inv;
    };

    return merge_sort(0, n);
}

int main() {
    int n;
    cin >> n;
    vector<pii> points(n);
    for (int i = 0; i < n; ++i)
        cin >> points[i].first >> points[i].second;

    sort(points.begin(), points.end());  // 按 x 排序

    vector<int> y(n);
    for (int i = 0; i < n; ++i)
        y[i] = points[i].second;

    long long total_pairs = 1LL * n * (n - 1) / 2;
    long long inv = inverse_pairs(y); // 不一致对数
    long long cons = total_pairs - inv;

    cout << cons - inv << endl;  // 输出一致对 - 不一致对
    return 0;
}
