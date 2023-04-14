// #include<stdio.h>
// #define ARRAY_SIZE sizeof(arr[n])/sizeof(arr[0])

// int find_zero(int arr[],int n)
// {
//     for (int i=0; i <n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i <n; i++)
//     {
//         if (arr[i]==0)
//         {
//             arr[i]=1;
//             break;
//         }
//     }
// }
// void find_longest_len(int arr[],int n)
// {
//     int count=0,maxcount=0;
//     find_zero(arr,n);
//     for (int i=0; i<n; i++)
//     {
//         if (arr[i]==1)
//         {
//             count++;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     if (count>maxcount)
//     {
//         maxcount=count;
//     }
//     printf("%d",maxcount);
// }
// int main()
// {
//     int n;
//     printf("Enter Value Of N\n");
//     scanf("%d",&n);
//     int arr[n];
//     find_longest_len(arr,n);
//     int x=find_zero(arr,n);
//     printf("%d",x);
//     return 0;
// }
/*Maximum Sum of Sub-Array of a Array*/
#include <stdio.h>
#define ARRAY_SIZE sizeof(arr[n])/sizeof(arr[0]);

int maxSubArraySum(int arr[], int n)
{
   int max_so_far = arr[0];
   int curr_max = arr[0];

   for (int i = 1; i < n; i++)
   {
        curr_max = (curr_max + arr[i] > arr[i]) ? curr_max + arr[i] : arr[i];
        max_so_far = (max_so_far > curr_max) ? max_so_far : curr_max;
   }
   
   return max_so_far;
}

int main()
{
    int n;
    printf("Enter The Array Size\n");
    scanf("%d",&n);
    printf("Enter The Elements OF Array\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Entered Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
    int max_sum = maxSubArraySum(arr, n);
    printf("\nMaximum contiguous sum is %d", max_sum);
    return 0;
}
// int main()
// {
//     char c;
//     for (int i = 0; i < 5; i++)
//     {
//         scanf(" %c",&c);
//         printf("%d\n ",c);
//     }
//     return 0;
// }