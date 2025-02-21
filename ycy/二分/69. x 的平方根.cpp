class Solution {
    public:
        int mySqrt(int x) {
            int left = 0, right = x;
            while (left <= right) {
                int middle = left + (right - left) / 2;  // 每次循环计算新的 middle
                long long square = (long long)middle * middle;  // 使用 long long 避免溢出
                if (square == x) {
                    return middle;  // 如果找到了精确的平方根，直接返回
                } else if (square < x) {
                    left = middle + 1;  // 如果 middle 的平方小于 x，说明 target 在右边
                } else {
                    right = middle - 1;  // 如果 middle 的平方大于 x，说明 target 在左边
                }
            }
            // 返回 right，因为在结束时，right 会指向最大的小于或等于 sqrt(x) 的整数
            return right;
        }
    };
    