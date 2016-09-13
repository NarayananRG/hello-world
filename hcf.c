#include<stdio.h>
#include<math.h>
int main()
{
int a,b,t,lcm,x,y;
printf("Enter two numbers");
scanf("%d %d",&x,&y);
b=y;
a=x;
while(b!=0){
t=b;
b=a%b;
a=t;
}
lcm=(x*y)/a;
printf("The hcf is %d lcm is %d",a,lcm);
return 0;
}


