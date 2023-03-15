//Wap to print the following triangle pattern::--

#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter number of rows you want in your triangle\n");
    scanf("%d",&rows);
    
    for (i=1; i<=rows; i++)
    {  
        
    for (int s=1; s<=rows-i; s++)
    {
        printf(" ");
    }
    for (j=1; j<=i; j++)
    {
        printf("%d",j);
    }
    for ( k=i-1; k>=1; k--)
    {
        printf("%d",k);
    }
    printf("\n");
    }
    return 0;
}