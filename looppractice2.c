//WAP TO FIND THE SUM OF FIRST N NATURAL NUMBER USING FOR.

#include<stdio.h>
int main()
{
int n,sum;
printf("Enter a Number\n");
scanf("%d", &n);
int i;
i=0;
sum=0;
for (i=1; i<=n; i++ )
{
    sum=sum+i;
}

 printf("the sum of first required natural number is:%d\n",sum);

    return 0;
}