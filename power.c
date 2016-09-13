#include <stdio.h>
#include <math.h>

int main()
{
   double base,power;
   scanf("%lf%lf",&base,&power);
   double result=pow(base,power);
   printf("%lf",result);
    return 0;
}
