// longest increase subsequence
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int max = 1;
    scanf("%d", &n);
    int cnt = 0;
    int *a = (int *)malloc(4 * n);
    int *b = (int *)malloc(4 * n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = 1;
		if (i==0)
		{
			continue;
			/* code */
		}
		
        for (j = i; j >= 0; j--)
        {
            if (a[i] > a[j])
            {
                b[i] = b[j] + 1;
                if (b[i] > max)
                {
                    max = b[i];
                }
                break;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
