#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    int n;
    printf( "请输入你要算几个数字: ");
    scanf("%d",&n);
    int *arr = (int * )malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("内存申请失败！ \n");
        return 1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        printf("请输入第%d个数字: ",i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    double avg = (double)sum / n;
    printf("平均值 = %.2f\n", avg);
    free(arr);
    arr = NULL;
    return 0;
}