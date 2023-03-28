//Wap to print series of natural numbers::--
#include<stdio.h>
    int rows(int row)
{
    int i;
    for (i=1; i<row; i++)
{
    printf("%d ",i);
}
return i;
}
    int printnum(int rows)
{
while(rows>1)
{
return printf("%d \n %d",printnum(rows),printnum(rows-1));
}
}

int main()
{
    double row;
    printf("Enter number of rows you want in triangle\n");
    scanf("%lf",&row);

    printnum(rows);
    
    return 0;
}