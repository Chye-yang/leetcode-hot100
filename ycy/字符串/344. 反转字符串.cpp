#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        if (s.size() == 0)
        {
            return;
        }
        int head = 0, tail = s.size() - 1;
        while (head < tail)
        {
            // if(head>tail){
            //     return;
            // }
            char tep = s[head];
            s[head] = s[tail];
            s[tail] = tep;
            head++;
            tail--;
        }
    }
};