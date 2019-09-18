
public class toLower {
	
	public static int lower(String str)
	{
		int i = 0, count = 0;
		if(str.length() == 0)
		{
			return 0;
		}
		else if(Character.isLowerCase(str.charAt(0))==true)
		{
			count++;
			return count + lower(str.substring(1));
		}
		else
			return count + lower(str.substring(1));
	}
	
	public static void main(String args[])
	{
		String s = new String("Hello World.");
		System.out.println(lower(s));
	}

}
