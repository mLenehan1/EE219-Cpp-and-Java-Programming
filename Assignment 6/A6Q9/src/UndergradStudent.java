
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
		Student[] sa = new Student[4];
		sa[0] = new PostgradStudent("Michael Lenehan", "ECE Postgrad", 15410402, 1, "John Smith");
		sa[1] = new PostgradStudent("James Jones", "ECE Postgrad", 15410503, 1, "John Smith");
		sa[2] = new UndergradStudent("Tom Anderson", "ECE", 1542062, 2, m);
		sa[3] = new UndergradStudent("Joe Sullivan", "ECE", 1542663, 2, m);
		sa[0].Display();
		sa[1].Display();
		sa[2].Display();
		sa[3].Display();
	}
}
