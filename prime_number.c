#include<stdio.h>
void main()
{
int n,i,j;
for(n=1;n<=100;n++)
 {  i=0;
   for(j=1;j<=n;j++)
    {
       if(n%j==0)
        i++;
    }
        if(i==2)
        printf("%d\t",n);
 }
}