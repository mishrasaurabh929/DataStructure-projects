import java.util.*;
public class Customer 
{
	String name;
	String date;
	Scanner sc = new Scanner(System.in);
	void read()
	{
		System.out.println("enter the name and date");
		name=sc.next();
		date=sc.next();
		
		
	}
	void display()
	{
		System.out.println("the name and dob is " +"\n"  +name);
		String deli="/";
		StringTokenizer st= new StringTokenizer(date,deli);
		while(st.hasMoreElements())
		{
			System.out.print("" +st.nextElement());
		}
		System.out.println();
	}
	public static void main(String args[])
	{	
		Scanner s=new Scanner(System.in);
		System.out.println("enter no. of customers");
		int n=s.nextInt();
		Customer obj[] = new Customer[n];
		for(int i=0;i<n;i++)
		{
			obj[i]=new Customer();
			obj[i].read();
			obj[i].display();
		}
	}
		
}
