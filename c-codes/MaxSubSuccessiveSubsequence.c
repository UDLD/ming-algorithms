#include<stdio.h>
int main()
{
    int a[100];
    int n, Max = 0, max = 0;//分别定义两和
    int c1 = 0, c2 = 0;
    int cc1 = 0, cc2 = 0;//记录两组和的起末位置
    scanf("%d", &n);//输入数组长度
    int i;
    for (i = 0; i < n; i++)//循环输入数组并进行判断
    {
        scanf("%d", &a[i]);
        if (i == 0)//初始化两组最大和
        {
            Max = max = a[i];
            continue;
        }
        if (max > 0)
        {
            max = max + a[i];
            cc2 = i;
        }
        else if (max <= 0)
        {
            max = a[i];
            cc1 = cc2 = i;
        }
        if (max >= Max)//判断是否取代
        {
            Max = max;
            c1 = cc1, c2 = cc2;
        }
    }
    printf("%d %d\nMax=%d\n", c1, c2, Max);//输出位置及和
    return 0;
}
