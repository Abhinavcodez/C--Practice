//Wap to print the number pattern::--

#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter number of rows you want in your pattern\n");
    scanf("%d",&rows);

    for (i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
           printf("%d",j);
        }
        
        printf("\n");
    }
      
    return 0;
}