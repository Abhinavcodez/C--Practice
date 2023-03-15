//Wap to print the following star pattern::--

#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter number of rows you want in your series\n");
    scanf("%d",&rows);

    for (i=1; i<=rows; i++)
    {
        for (j=1;j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}