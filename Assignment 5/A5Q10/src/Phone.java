
public class Phone {
	protected String brand, model, state;
	protected int year;
	
	public Phone(String manu, String mod, String sta, int yea)
	{
		brand = manu;
		model = mod;
		state = sta;
		year = yea;
	}
	
	public void buyNew(Phone p)
	{
		if(p.year<2010)
			System.out.println("Your phone is from " + p.year + "! You Should Buy a new one!");
	}
	
}

