#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char, int> t_count, window_count;
        for (char c : t) {
            t_count[c]++;
        }

        int required = t_count.size();  // 需要匹配的不同字符数
        int formed = 0;  // 当前窗口内满足条件的不同字符数
        int left = 0, right = 0;  // 窗口的左右指针
        int min_len = INT_MAX;
        int min_left = 0;  // 最小窗口的起始位置

        // 滑动窗口扩展
        while (right < s.length()) {
            char c = s[right];
            window_count[c]++;

            // 如果当前字符的出现次数等于 t 中的要求，增加 formed
            if (window_count[c] == t_count[c]) {
                formed++;
            }

            // 如果 formed 达到 required，说明当前窗口包含 t 中所有字符
            while (left <= right && formed == required) {
                char left_char = s[left];

                // 更新最小窗口
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    min_left = left;
                }

                // 收缩窗口
                window_count[left_char]--;
                if (window_count[left_char] < t_count[left_char]) {
                    formed--;
                }
                left++;
            }

            // 扩展窗口
            right++;
        }

        return min_len == INT_MAX ? "" : s.substr(min_left, min_len);
    }
};
