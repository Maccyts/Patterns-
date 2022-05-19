import java.util.*;
import java.lang.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String s=sc.nextLine();
	        int l=s.length();
	    for(int i=1;i<=l;i++)
	    {
	        for(int j=1;j<=l-i;j++)
	            	System.out.print("  ");
	            String x=s.substring(0,i);
	            for(int j=0;j<x.length();j++)
	                	System.out.print(x.charAt(j)+" ");
	                for(int j=x.length()-1;j>=0;j--)
	                    	System.out.print(" "+x.charAt(j));
	        	System.out.println(" ");
	    }
	                	
	            
	    }
	
	}


