//P-3::-- wap to check whether the number is even or odd::--
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to check whether it is even or odd\n\t");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("%d IS EVEN\v",n);
    }
    else
    {
        printf("%d IS ODD\v",n);
    }
    return 0;
}