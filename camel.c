#include <stdio.h>
int main()
{
    char name[100];
    int f, i, l;
    gets(name);
    if(name[0]>='a'&&name[0]<='z')
    {
        name[0] = name[0]  - 32;
    }
    for(i=1;i<l;i++)
     {
        if(name[i]==' ')
        {
            if(name[i+1]>='a'&& name[i+1]<='z')
            {
              int j = i + 1;
              name[j]= name[j]-32;
            }
        }
    }
   puts(name);
   return 0;
}
