#include <stdio.h>
int factorial();
int main()
{
    int num,fact;
    scanf("%d",&num);
    fact=factorial(num);
    printf("%d",fact);
    return 0;
}
int factorial(int n)
{
    int ans;
    if(n==0)
    return 1;
    else
    ans=factorial(n-1)*n;
    return ans;
}
