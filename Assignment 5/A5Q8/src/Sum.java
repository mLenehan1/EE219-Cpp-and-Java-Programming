
public class Sum {
	public static long val = 1;
	
	public static long sum(int N)
	{
		if(N>0)
		{
			val = val + N;
			N --;
			sum(N);
		}
		return val;
}
	
	public static void main(String args[])
	{
		System.out.println(sum(3));
	}
}