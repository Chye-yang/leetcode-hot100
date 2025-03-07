#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <climits> // 引入 INT_MAX

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> sum;
        int sum0 = 0;
        while (1)
        {
            while (n != 0)
            {
                sum0 += (n % 10) * (n % 10);
                n /= 10;
            }
            if (sum.find(sum0) != sum.end())
            {
                return false;
            }
            else
            {
                if (sum0 == 1)
                {
                    return true;
                }
                else
                {
                    sum.insert(sum0);
                    n = sum0;
                    sum0 = 0;
                }
            }
        }
    }
};
