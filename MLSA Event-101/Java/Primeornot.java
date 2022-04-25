package prime;
import java.util.Scanner;
public class Primeornot {
	public static void main(String args[]) {
	int flag = 0;
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			flag = flag +1;
		}
	}
	if(flag==0)
	{
		System.out.println(n+ " is prime");
	}
	else
	{
		System.out.println(n+" is not prime");
	}
	}
}
