#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int left = 0, right = nums.size() - 1;

            while (left <= right) {
                int middle = left + (right - left) / 2; // 防止溢出
                
                if (nums[middle] == target) {
                    return middle; // 返回索引
                } else if (nums[middle] < target) {
                    left = middle + 1;
                } else {
                    right = middle - 1;
                }
            }
            return -1; // 未找到目标值
        }
};