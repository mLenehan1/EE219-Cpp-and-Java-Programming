
public class Test1 implements Printable{
	protected String str;
	
	public Test1(String s)
	{
		str = s;
	}
	
	public void print()
	{
		System.out.println(str);
	}
	
	public static void main(String args[])
	{
		Test1[] t = new Test1[2];
		t[0] = new Test1("Hello?");
		t[1] = new Test1("Who are you?");
		t[0].print();
		t[1].print();
		Test2[] s = new Test2[2];
		s[0] = new Test2("Is there Anybody Out There?");
		s[1] = new Test2("Echo???");
		s[0].print();
		s[1].print();
	}
}
