#include "stdio.h"
#include "string.h"
#define MAX 10000/*The maximum number of results can be expanded by itself to enlarge the range*/
int f[MAX];//Defines an array to store each
void Arr_reset(int a[], int m, int n)//Array initializer
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
    Arr_reset(f, 0, (sizeof(f) / sizeof(int))); //Initialize the array
    f[0] = 1;//Initializes the array. You can think of it as changing the factorial of the array to 1
    for (i = 2; i <= n; i++)
    {
//The Times I
        int c = 0;
        for (j = 0; j < MAX; j++) //The most difficult to understand
        {
            int s = f[j] * i + c;//It can be understood as separating each bit and going on to calculate the next bit
            f[j] = s % 10;//The Numbers are in reverse order
            c = s / 10;/*It's convenient to print the Numbers down here, because the rightmost digit is definitely greater than zero, and all of them are zeros*/
//When s is a unit number, f[0] is continuously overwritten.
//Otherwise, a muti-digit number will be stored in reverse, such as 123, f[0] store 3, f[1] store 2, f[3] store 1
        }
    }
    for (j = MAX - 1; j >= 0; j--)//The beginning of the search results,
        if (f[j])
            break;
    for (i = j; i >= 0; i--)//Direct output 
        printf("%d", f[i]);
    printf("\n"); 
    return 0; 
}  
