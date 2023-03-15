//WAP TO FIND THE SUM OF FIRST N NATURAL NUMBER USING WHILE.

#include<stdio.h>
int main()
{
int n,sum;
printf("Enter a Number\n");
scanf("%d", &n);
int i;
i=0;
sum=0;
while (i<=n)
{
    sum=sum+i;
    i++;
}

 printf("the sum of first required natural number is:%d\n",sum);


    return 0;
}