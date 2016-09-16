#include <stdio.h>
int main()
{
   int i;
    printf("Please select a number:\n1\n2\n3\n4\n5\n6\n7\n8\n9\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:printf("You entered the number 1");break;
        case 2:printf("You entered the number 2");break;
        case 3:printf("You entered the number 3");break;
        case 4:printf("You entered the number 4");break;
        case 5:printf("You entered the number 5");break;
        case 6:printf("You entered the number 6");break;
        case 7:printf("You entered the number 7");break;
        case 8:printf("You entered the number 8");break;
        case 9:printf("You entered the number 9");break;
        default:printf("You entered the number out of range");
    }
    return 0;

}
