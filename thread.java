import java.util.Random;
class First extends Thread
{
	Random r=new Random();
	public void run()
	{
		int num=0;
		for(int i=0;i<5;i++)
		{
			num=r.nextInt(100);
			System.out.println(num);
			Thread t2 = new Thread(new Second(num));
			t2.start();
			Thread t3 = new Thread(new Third(num));
			t3.start();

			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}
class Second extends Thread
{
	int x;
	public Second(int x)
	{
		this.x=x;
		System.out.println("square" +(x*x));
	}
		
}
class Third extends Thread
{
	int x;
	public Third(int x)
	{
		this.x=x;
		System.out.println("cube" +(x*x*x));
	}
}

public class demothread
{
	public static void main(String args[])
	{
		First first=new First();
		first.start();
	}
}
