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

    while(1)
    {
        printf("Enter two numbers(0 0 to exit): ");
        scanf("%d %d", &x, &y);

        if(x == 0 && y == 0)
        {
            break;
        }
        swap(&x, &y);
        printf("After swap : x = %d, y = %d\n\n", x, y);
    }
    return 0;
}
   