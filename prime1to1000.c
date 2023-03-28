//WAP to find the all prime numbers between 1 to 1000.
#include<stdio.h>
int main()
{
    int i,j;

    for (i = 2; i <=1000; i++)
    {  
       int c=0;

    for(j=1; j<=i/2; j++)

{
       if (i%j==0)
       {
          c++;
       }
}  
       if(c==1)
       {
          printf("%d  ",i);
       }  

}    
      return 0;
}