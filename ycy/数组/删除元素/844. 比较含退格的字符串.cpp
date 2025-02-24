class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int fast = 0, slow = 0;

        // 处理字符串 s
        for (fast = 0; fast < s.length(); fast++)
        {
            if (s[fast] != '#')
            {
                s[slow] = s[fast]; // 保存有效字符
                slow++;
            }
            else
            {
                if (slow > 0)
                {
                    slow--; // 退格，回退一个字符
                }
            }
        }

        // 记录 s 处理后的有效长度
        int s_len = slow;

        // 重置 slow，准备处理 t
        slow = 0;
        for (fast = 0; fast < t.length(); fast++)
        {
            if (t[fast] != '#')
            {
                t[slow] = t[fast]; // 保存有效字符
                slow++;
            }
            else
            {
                if (slow > 0)
                {
                    slow--; // 退格，回退一个字符
                }
            }
        }

        // 记录 t 处理后的有效长度
        int t_len = slow;

        // 如果处理后的有效字符数不同，直接返回 false
        if (s_len != t_len)
        {
            return false;
        }

        // 比较处理后的有效字符
        for (int i = 0; i < s_len; i++)
        {
            if (s[i] != t[i])
            {
                return false;
            }
        }

        return true;
    }
};