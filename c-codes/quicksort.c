#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void Quickly_Sort(int *a, int l); //声明排序函数，形参包括一个数组，一个数组长度
int main()
{
    int i;
    int N;//n用于存储数组长度；
    printf("请输入数组长度\n");
    scanf("%d",&N);
    int *n=(int *)malloc(N*sizeof(int));//为数组申请内存
    for (i = 0; i < N; i++) //循环输入数组。
        scanf("%d", &n[i]);
    Quickly_Sort(n, N);
    for (i = 0; i < N; i++)
        printf(" %d ,", n[i]);
    printf("\n");
}
void Quickly_Sort(int a[], int l)
{
    int Criterion = *a; //以第一个数为标准，进行第一次递归。
    int i = 0, j = l - 1, cnt = 0; //初始化变量，cnt用于记录标准数的位置。
    while (i != j)
    {
        for (; j > i; j--) //循环自左往右寻找比标准量小的交换
        {
            if (*(a + j) < Criterion) //找到进行交换，并跳出。
            {
                *(a + cnt) = *(a + j);
                *(a + j) = Criterion;
                cnt = j;
                break;
            }
        }
        for (; i < j; i++) //循环自左往右寻找比标准量小的交换
        {
            if (*(a + i) > Criterion) //找到进行交换，并跳出。
            {
                *(a + cnt) = *(a + i);
                *(a + i) = Criterion;
                cnt = i;
                break;
            }
        }
    }
    if (i != 0) //安排递归条件，递归出口。
    {
        Quickly_Sort(a, i);
    }
    if (l - j - 1 != 0)
    {
        Quickly_Sort(a + i + 1, l - j - 1);
    }
}
