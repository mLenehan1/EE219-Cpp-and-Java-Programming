
public class UndergradStudent extends Student{
	protected Module[] module = new Module[3];
	protected String module_name;
	protected int module_number;
	
	
	public UndergradStudent(String stuName, String progCode, int stuNum, int stuYear, Module[] m)
	{
		super(stuName, progCode, stuNum, stuYear);
		module = m;
		
	}
	
	public void Display()
	{
		super.Display();
		System.out.println("\nModule List: \n");
		for(int i = 0; i<module.length; i++)
		{
			module[i].display();
		}
	}
	
	public static void main(String args[])
	{
		Module m[];
		m = new Module[3];
		m[0] = new Module("Maths", "EE220");
		m[1] = new Module("OOP", "EE219");
		m[2] = new Module("Embedded Systems", "EE202");
		UndergradStudent s1;
		s1 = new UndergradStudent("Michael Lenehan", "ECE", 15410402, 2, m);
		s1.Display();
	}
}
