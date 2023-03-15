//P-1::-- wap to print all even,odd using while loop

#include<stdio.h>
int main()
{

int n;
printf("Enter a Number to print all even and oddd numbers till entered number::--\n");
scanf("%d",&n);
int i;
i=0;
while (i<=n)
{
  if (i%2==0)
  {
    printf("%d is even\t\n",i);
  }
  else
  {
    printf("%d is odd\t",i);
  }
  i++;
}
  return 0;
}