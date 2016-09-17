#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int  i;
    printf("Enter the sentence \n");
    gets(name);
    if(name[0]>='a'&&name[0]<='z')
    {
        name[0]=name[0]-32;
    }
    for(i=1;i<(strlen(name)-1);i++)
    {
        if(name[i]==' ')
        {
            if(name[i+1]>='a'&&name[i+1]<='z')
            {
            name[i+1]=name[i+1]-32;
            }
        }
    }
    puts(name);
    return 0;
}
