package newfile;

import java.util.Scanner;

public class javaenum 
{

	public static void main(String[] args)
	{
	   Scanner s=new Scanner(System.in);
	   String a=s.nextLine();
	   String b;
	   int c=a.compareTo("saturday");
	   int d=a.compareTo("sunday");
	  if ((c==0)||(d==0))
		System.out.println("true");
	  else
			System.out.println("false");
	 
	   }
	   
		   
	  
	}


