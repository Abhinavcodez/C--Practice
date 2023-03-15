#include<stdio.h>
int main()
{
//P-2::-- wap to print all even,odd using for loop

int n;
printf("Enter a Number to print all even and odd till that number::--\n");
scanf("%d",&n);

for ( int i = 0; i <=n; i++)
{
  if (i%2==0)
  {
    printf("%d \t\n",i);
  }
  else
  {
    printf("%d \t",i);
  }
}
  return 0;
}