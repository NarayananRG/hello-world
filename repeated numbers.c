#include <stdio.h>

int main()

{
    
int numstore[100000];
    
int repstore[100000];
    
int n,i,a;
    
int temp=0;
    
//printf("Enter the number of input values");
    
scanf("%d",&n);
    
//printf("Enter the values");
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&numstore[i]);
    
}
    
//printf("The entered values are: ");
    
for(i=0;i<n;i++)
    
{
        
for(int j=i+1;j<n;j++)
        
{
            
if(numstore[i]==numstore[j])
            
{
                
repstore[i]=numstore[i];
                
a++;
            
}
        
}
    
}
    
if(repstore[0]=='\0')
    
printf("unique");
    
else
    
{
    
for(i=0;i<a;i++)
   
{
        
for(int j=i+1;j<a;j++)
        
{
            
if(repstore[i]>repstore[j])
            
{
                
temp=repstore[i];
                
repstore[i]=repstore[j];
                
repstore[j]=temp;
            
}
        
}
    
}
    
         
for(i=0;i<a;i++)
         
printf("%d\n",repstore[i]);
    
}
    
return 0;

}