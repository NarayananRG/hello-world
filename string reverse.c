#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],reva[100];
    int j=0,i;
    gets(a);
    for(i=(strlen(a)-1);i>=0;i--)
     reva[j++]=a[i];
     reva[j]='\0';
    puts(reva);
    return 0;
}
