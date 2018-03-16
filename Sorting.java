import java.util.*;
class Quicksort
{
	static int max=5000;
	int partition(int a[],int low,int high)
	{
		int p,i,j,temp;
		p=a[low];
		i=low+1;
		j=high;
		while(low<high)
		{
			while(a[i]<=p && i<high)
			{
				i++;
			}
			while(a[j]>p)
			{
					j--;
			}
			if(i<j)
			{	
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			else
			{
				temp=a[low];
				a[low]=a[j];
				a[j]=temp;
				return j;
						
			}
		}
			
		
		return j;
	}
	void qsort(int a[],int low,int high)
	{
		if(low<high)
		{
			int s=partition(a,low,high);
				qsort(a,low,s-1);
				qsort(a,s+1,high);
		}
	}
	
}
public class Sorting
{
	public static void main(String[] args)
	{
		
		Scanner sc =new Scanner(System.in);
		System.out.println("enter the value of n");
		int n=sc.nextInt();
		int a[] = new int[n];
		Random r = new Random();
		for(int i=0;i<n;i++)
		{
			a[i]=r.nextInt(100);
			System.out.println(a[i]);
			
		}
		Quicksort s= new Quicksort();
		long starttime = System.nanoTime();
		s.qsort(a, 0, n-1);
		long endtime =System.nanoTime();
		double elapsedtime = endtime-starttime;
		System.out.println("time in milliseconds" +(elapsedtime/1000000));
		System.out.println("the elements after sorting\n");
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]);
		}
	}
}
