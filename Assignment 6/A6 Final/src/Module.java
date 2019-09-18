
public class Module {

	protected String module_name, module_number;
	
	public Module(String modName, String modNum)
	{
		module_name = modName;
		module_number = modNum;
	}
	
	public void display()
	{
		System.out.println("Module Name: " + module_name + "\nModule Number: " + module_number);
	}
}
