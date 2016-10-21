package singlelet;
import java.util.Scanner;
public class Singlelet 
{	
	public static void main(String[] args)
	{	
         Scanner in=new Scanner(System.in);
	     String a=in.nextLine();
	     char b[]=a.toCharArray();
	     char c[]=new char[a.length()];
	     int count=0;
	     int l=0;
	     int k[]=new int[a.length()];
	     for(int i=0;i<b.length;i++)
	     {
	    	 c[i]=b[i];
	     }
	     for (int i = 0; i < c.length; i++) 
	     {
	    	 count=0;
	    	 for (int j = 0; j < c.length; j++) 
	    	 {
	    		 if(c[i]==b[j])
			    count++;	    		 
	    	 }
	    			 k[l]=count;	    		 
				l++;
	     }
	     for (int i = 0; i < k.length; i++) 
	     {   	 
	    	 if(k[i]==1)
	          System.out.println(b[i]);   	 
	     }
	}

}
