#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=n-k;i--)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<(n-k);i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
