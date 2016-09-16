#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n,fact;
   fact=1;
   j=1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       fact=fact*j;
       j++;
   }
    printf("%d",fact);
    return 0;
}
