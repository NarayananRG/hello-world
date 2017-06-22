import java.util.Scanner;
class sorting
{
	sorting()
	{
	Scanner s=new Scanner(System.in);
	int i=0; int temp=0; int j=0;
	int n=0;
	n=s.nextInt();
	int arr[]=new int[n];
	for(i=0;i<5;i++)
	{
	  arr[i]=s.nextInt();
	}
	for(i=0;i<5;i++)
	{
	  for(j=i+1;j<5;j++)
	  {
		  if(arr[i]>arr[j])
		  {
		     temp=arr[i];
		     arr[i]=arr[j];
		     arr[j]=temp;
		  }
		  
	  }
	}
	for(i=0;i<5;i++)
	{
		if(i==arr[i])
			System.out.print(arr[i]);
		System.out.println(" ");
	}
	for(i=0;i<5;i++)
	System.out.print(arr[i]);
	}

}
public class alternatesort 
{
	public static void main(String[] args) 
	{
	    sorting x=new sorting();	
	}

}
