
public class reverse {
	
	public static String reverse(String str)
	{
		StringBuffer s = new StringBuffer(str);
		s.reverse();
		String sret = new String(s);
		return sret;
	}
	
	public static void main(String args[])
	{
		String s1 = "Hello World!";
		s1 = reverse(s1);
		System.out.println(s1);
	}

}
