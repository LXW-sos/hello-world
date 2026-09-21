#include<stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int x, y;
    printf("请输入两个整数：");
    scanf("%d %d", &x, &y);
    printf("交换前：x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("交换后：x=%d, y=%d\n", x, y);
    return 0;
}