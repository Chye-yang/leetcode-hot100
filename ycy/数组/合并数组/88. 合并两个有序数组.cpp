    #include <iostream>
    #include <string>
    #include <vector>
    #include <climits> // 引入 INT_MAX

    using namespace std;

    class Solution
    {
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            int t1 = m - 1, t2 = n - 1;
            if (m == 0)
            {
                for (int i = 0; i < nums2.size(); i++)
                {
                    nums1[i] = nums2[i];
                }
            }
            else if (n == 0)
            {
            }
            else
            {
                for (int i = m + n - 1; i >= 0; i--)
                {
                    if (nums2[t2] > nums1[t1])
                    {
                        nums1[i] = nums2[t2];
                        t2--;
                        if (t2 == -1)
                        {
                            return;
                        }
                    }
                    else
                    {
                        nums1[i] = nums1[t1];
                        t1--;
                        if (t1 == -1)
                        {
                            for (int j = 0; j <=t2; j++)
                            {
                                nums1[j] = nums2[j];
                            }
                            return;
                        }
                    }
                }
            }
        }
    };
