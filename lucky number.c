

#include <stdio.h>


int main()

{
    
int num[100000];
    
int i,n;
    
printf("Enter the value of n: ");
    
scanf("%d",&n);
    
printf("\nEnter the values of num: ");
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&num[i]);
            
    
}
    
printf("\nThe entered values are:");
    
for(i=0;i<n;i++)
    
{
        
if((i*num[i])==num[i])
        
printf("Lucky number: %d ",num[i]);
            
    
}
    
return 0;

}
