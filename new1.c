#include<stdio.h>

int main()
{
int n, sum;
printf("Enter a natural number\n");
scanf("%d", &n);

int i=0;
sum=0;
while (i<=n)
{
  sum=sum+i;
  i++;
}

  if (n>0)
  {
    printf("the sum of the first natural numbers is:%d\n",sum );
  }
  else{
    printf("the number you entered is not a natural number\n");
  }


printf("thank you\n");

    return 0;
}