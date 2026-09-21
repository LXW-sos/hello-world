#include <stdio.h>
int main()
{
    double a, b, res;
    char op;
    printf("请输入算式，例：3 + 5\n");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op)
    {
        case '+': res = a + b; printf("结果=%.2lf\n", res); break;
        case '-': res = a - b; printf("结果=%.2lf\n", res); break;
        case '*': res = a * b; printf("结果=%.2lf\n", res); break;
        case '/':
            if(b == 0)
                printf("错误：除数不能为0！\n");
            else
            {
                res = a / b;
                printf("结果=%.2lf\n", res);
            }
            break;
        default: printf("不支持的运算符\n");
    }
    return 0;
}