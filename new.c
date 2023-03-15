#include<stdio.h>
#define ARRAY_SIZE sizeof(arr[n])/sizeof(arr[0])

int find_zero(int arr[],int n)
{
    for (int i=0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==0)
        {
            arr[i]=1;
            break;
        }
    }
}
void find_longest_len(int arr[],int n)
{
    int count=0,maxcount=0;
    find_zero(arr,n);
    for (int i=0; i<n; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    if (count>maxcount)
    {
        maxcount=count;
    }
    printf("%d",maxcount);
}
int main()
{
    int n;
    printf("Enter Value Of N\n");
    scanf("%d",&n);
    int arr[n];
    find_longest_len(arr,n);
    int x=find_zero(arr,n);
    printf("%d",x);
    return 0;
}