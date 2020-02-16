#include "stdio.h"
#include "string.h"
#define MAX 10000//结果最大位数，可以自行扩大·以扩大范围
int f[MAX];//定义存储各位的数组
void Arr_reset(int a[], int m, int n)//数组初始化函数
{
    int i;
    for (i = m; i <= m; i++)
    {
        a[i] = 0;
    }
}
int main(void)
{
    int i, j, n;
    printf("Enter n:");
    scanf("%d", &n);
    Arr_reset(f, 0, (sizeof(f) / sizeof(int))); //对数组进行初始化
    f[0] = 1;//初始化数组。可以理解为更改数组为1的阶乘
    for (i = 2; i <= n; i++)
    {
//乘以 i
        int c = 0;
        for (j = 0; j < MAX; j++) //最不易理解的
        {
            int s = f[j] * i + c;//可以理解为分离每一位，并继续往下计算下一位
            f[j] = s % 10;//可以参考上面的图片，数的顺序是反过来的
            c = s / 10;//方便 下面输出数 ，因为最右边的 一位 肯定是 大于 0的，而且 后面全为0
//算出的 s 是单位数时，会连续覆盖 f[0]
//否则一个多位数会倒过来存储，如 123，f[0]存 3，f[1]存 2，f[3]存 1
        }
    }
    for (j = MAX - 1; j >= 0; j--)//查找 结果的开头 ，
        if (f[j])
            break;
    for (i = j; i >= 0; i--)//直接输出即可 
        printf("%d", f[i]);
    printf("\n"); 
    return 0; 
}  
