#include<stdio.h>
int main()
{
    int a[100];
    int n, Max = 0, max = 0;//Define two and
    int c1 = 0, c2 = 0;
    int cc1 = 0, cc2 = 0;//Record the starting and ending positions of two groups and
    scanf("%d", &n);//Input array length
    int i;
    for (i = 0; i < n; i++)//Loop in the array and determine
    {
        scanf("%d", &a[i]);
        if (i == 0)//Initializes the maximum sum of two sets
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
        if (max >= Max)//To determine whether or not to replace
        {
            Max = max;
            c1 = cc1, c2 = cc2;
        }
    }
    printf("%d %d\nMax=%d\n", c1, c2, Max);//Output location and
    return 0;
}
