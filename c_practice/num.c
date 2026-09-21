#include <stdio.h>
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d 是偶数\n",n);
    else
        printf("%d 是奇数\n",n);
    return 0;
}