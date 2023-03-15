//Wap to print one's series::--

#include<stdio.h>
int main()
{
    //NO. OF CASES::--
    int t;
    printf("Enter Terms you want in your series\n");
    scanf("%d",&t);
    
        double firstterm,nextterm;
        int i;
        double sum=0;
        firstterm=0;
        for ( i=1; i<=t; i++)
        {
            nextterm=(firstterm*10)+1;
            printf("%0.0lf",nextterm);
            if (i!=t)
            printf("+");
            firstterm=nextterm;
            sum=sum+nextterm;
        }
            printf("\nSum of the series is::\t%0.0lf\n",sum);
    
    return 0;
}