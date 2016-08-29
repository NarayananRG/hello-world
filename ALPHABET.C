#include<stdio.h>
void main()
{
char letter;
scanf("%c",&letter);
if(isdigit(letter))
printf("number");
else
printf("character");
}