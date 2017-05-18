#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,k,l,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            for(k=n-1;k>i;k--)
            {
                printf(" ");
            }
            for(j=0;j<=i;j++)
            {
                 printf("*");
            }
            for(j=0;j<=i;j++)
            {
                 printf("*");
            }
            for(l=n-1;l>i;l--)
            {
                 printf(" ");
            }
        printf("\n");
    }

    return 0;
}
