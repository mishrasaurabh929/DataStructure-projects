import java.util.*;
import java.lang.*;
class Error 
{
	public static void main(String[] args)
	{
		int a,b,c;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the value of the a and b");
		a=sc.nextInt();
		b=sc.nextInt();
		c=a/b;
		try
		{
			c=a/b;
			System.out.println("the result is " +c);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	
		
	}
}
