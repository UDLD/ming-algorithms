//The whole arrangement   
/* Take into account the longest length of the arrangement and all the circumstances, different requirements, can be changed*/
#include<stdio.h>
void Array(int array[],int n,int N);
void put_Array(int array[],int n);
void swap(int n[],int a,int b);
int main()
{
    int n;//The length of the
    int i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        array[i]=i+1;
    }
    Array(array,0,n-1);


}
void Array(int array[],int n,int N)
{
    if(n==N)
    {
        put_Array(array,N);
    }
    else
    {
        int i;
        for(i=n;i<=N;i++)
        {
            swap(array,n,i);
            Array(array,n+1,N);
            swap(array,n,i);
        }
    }
    
}

void put_Array(int array[],int n)//The output array
{
    int i;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void swap(int n[],int a,int b)//exchange
{
    int x=n[a];
    n[a]=n[b];
    n[b]=x;
}

