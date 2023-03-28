#include<stdio.h>
#include<math.h>
int check_prime(int n)
{
    int c=0,i;
    for (i=2; i<sqrt(n); i++)
    {
            if (n%i==0)
            {
                c++;
            }
    }
    if (c==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int c=check_prime(i);
            int d=check_prime(j);
            if (i==1 && j==1 && i+j==n)
            {
                printf("%d %d",i,j);
            }   
        }
    }
    return 0;
}