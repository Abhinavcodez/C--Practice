//WAP TO FIND THE SUM OF FIRST N NATURAL NUMBER USING DO WHILE.

#include<stdio.h>
int main()
{
int n,sum;
printf("Enter a Number\n");
scanf("%d", &n);
int i;
i=0;
sum=0;
do
{
    sum=sum+i;
   i++;
} while (i<=n);

 printf("the sum of first required natural number is:%d\n",sum);

printf("Thank you\n");
    return 0;
}