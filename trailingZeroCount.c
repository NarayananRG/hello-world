#include <stdio.h>
int factorialZeroCount(int);
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d",&b);
    a=factorialZeroCount(b);
    printf("%d",a);
    return 0;
}
factorialZeroCount(int n)
{
    int count=0;
    while(n>=5)
    {
        n/=5;
        count+=n;
    }
    return count;
}
