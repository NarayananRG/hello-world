#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        a=n/10;
        b=n%10;
        c=(a*a)+(b*b);
        n=c;
        if(c==1)
        {
            printf("Happy Number");
            break;
        }
    }


    return 0;
}
