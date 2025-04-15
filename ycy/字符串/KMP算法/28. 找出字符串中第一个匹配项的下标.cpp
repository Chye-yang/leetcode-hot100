class Solution
{
public:
    // 获取next数组的函数
    vector<int> getNext(string pattern)
    {
        int m = pattern.length();
        vector<int> next(m); // 创建next数组
        next[0] = -1;        // 第一个位置约定为-1

        for (int i = 1; i < m; i++)
        {
            int j = next[i - 1];
            while (j >= 0 && pattern[j + 1] != pattern[i])
            {
                j = next[j]; // 继续回溯
            }
            if (j == -1 || pattern[j + 1] == pattern[i])
            {
                next[i] = j + 1; // 记录回溯位置
            }
        }
        return next;
    }
    int KMP(string text, string pattern)
    {
        int n = text.length();
        int m = pattern.length();

        if (m == 0)
            return 0; // 空模式串，返回0
        if (n < m)
            return -1; // 主串比模式串短，返回-1

        vector<int> next = getNext(pattern); // 获取next数组
        int i = 0;                           // 主串指针
        int j = 0;                           // 模式串指针

        while (i < n)
        {
            if (j == -1 || text[i] == pattern[j])
            {
                i++;
                j++;
            }
            else
            {
                j = next[j]; // 不匹配时回溯
            }

            if (j == m)
            {                 // 找到匹配
                return i - j; // 返回匹配起始位置
            }
        }
        return -1; // 未找到匹配
    }
};

// 测试代码
int main()
{
    string text = "ABABABCABAA";
    string pattern = "ABABC";

    // 打印next数组
    vector<int> next = getNext(pattern);
    cout << "Next array: ";
    for (int val : next)
    {
        cout << val << " ";
    }
    cout << endl;

    // 执行KMP匹配
    int pos = KMP(text, pattern);
    if (pos != -1)
    {
        cout << "Pattern found at index: " << pos << endl;
    }
    else
    {
        cout << "Pattern not found" << endl;
    }

    return 0;
}