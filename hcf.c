#include<stdio.h>
#include<math.h>
int main()
{
int a,b,t,x,y;
printf("Enter two numbers");
scanf("%d %d",&x,&y);
b=y;
a=x;
while(b!=0){
t=b;
b=a%b;
a=t;
}

printf("The hcf is %d",a);
return 0;
}


