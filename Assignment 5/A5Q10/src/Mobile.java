
public class Mobile extends Phone{
	
	protected int screenL, screenW;
	
	public Mobile(String manu, String mod, String sta, int yea, int sL, int sW)
	{
		super(manu, mod, sta, yea);
		screenL = sL;
		screenW = sW;
	}
	
	public void buyNew(Mobile m)
	{
		if(m.year<2012)
			System.out.println("Your phone is from " + m.year + "! You Should Buy a new one!");
	}
	
	public static void main(String args[])
	{
		Mobile m = new Mobile("Nokia", "3310", "Working", 2001, 39, 22);
		m.buyNew(m);
		Phone p = new Phone("Apple", "iPhone 4", "Broken", 2010);
		p.buyNew(p);
	}
}