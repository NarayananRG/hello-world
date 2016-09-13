#include <stdio.h>
int main()
{
   int n;
   int n1,n2,i,result;
   scanf("%d",&n);
   n1=-1;n2=1;
   for(i=0;i<n;i++)
   {
       result=n1+n2;
       printf("%d\t",result);
       n1=n2;
       n2=result;

   }

    return 0;
}
