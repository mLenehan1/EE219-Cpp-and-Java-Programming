import java.util.Random;

public class Array {
	
	public static double[] randomArray(int N)
	{
		double[] randArray;
		randArray = new double[N];
		int i;
		for(i = 0; i<(N); i++)
		{
			Random randProb = new Random();
			double rand_1 = 0.0 + randProb.nextDouble()*(3-0);
			if(rand_1<=2)
			{
			Random randNum = new Random();
			double rand = 0.0 + randNum.nextDouble() * (0.5 - 0.0);
			randArray[i] = rand;
			}
			else if(rand_1>2)
			{
				Random randNum = new Random();
				double rand = 0.5 + randNum.nextDouble() * (1.0-0.5);
				randArray[i] = rand;
			}
			
		}
		
		return randArray;
		
			
	}
	
	public static void main(String args[])
	{
		double[] arr;
		arr = randomArray(15);
		for(int i = 0;i <15;i++)
		System.out.println(arr[i]);
	}

}
