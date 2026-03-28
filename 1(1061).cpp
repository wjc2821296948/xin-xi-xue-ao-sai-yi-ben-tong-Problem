#include <stdio.h>
int main()
{
    int n, t, sum = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)    // 循环n次
    {
        scanf("%d", &t);    // 每循环一次输入一个学生的年龄
        sum += t;           // 求学生的年龄之和
    }
    double aver = 1.0 * sum / n;    // 求平均年龄
    printf("%d %.5f", sum, aver);
    return 0;
}

