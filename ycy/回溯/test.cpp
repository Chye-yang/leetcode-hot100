#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

广度优先

深度优先

数学归纳法

n = k ?

      当n = 1 n = dasjdlaldajd;

当n = k时，可以退出n = k - 1也成立；

                       递归 = 自己调用自己

    int
    fib(int n)
{

    int a = 1;
    int b = 1;

    int num[100];

    num[0] = 1;
    num[1] = 1;
    for (int i = 2; i <= 100; i++)
    {

        num[i] = num[i - 1] + num[2];
    }

    return num[n];
}

1 1 2 3 5 8 13 21 n = 3 return 3 int fib(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    int a = fib(n - 1);
    int b = fib(n - 2);

    return a + b;
}

帧栈

d - rigth

        先序遍历（前序遍历） 1. visit 2. 传入node->left 3. 传入node->right

            中序遍历 1. 传入node->left 2. visit 3. 传入node->right

    void
    f(Node *node)
{
    if (node == null)
    {
        return;
    }

    printf("%d", node.val);
    visit;
    count++;
    中
        f(node.left);
    f(node.right);

    return;
}


广度  优先