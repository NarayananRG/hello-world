package newfile;

import java.util.Scanner;

public class evenoddswap 
{
	public static void main(String[] args) 
	{		
		String b;
		Scanner s=new Scanner(System.in);
		b=s.nextLine();
		char a[]=b.toCharArray();
		for (int i = 0; i < a.length; i++) 
		{		int j=i+1;	    
				char temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				i++;
				j++;
		}
		for (int j = 0; j < a.length; j++) 
		{
		System.out.print(a[j]);
		}
	}

}
