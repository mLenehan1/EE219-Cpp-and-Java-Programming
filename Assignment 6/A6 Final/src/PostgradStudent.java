
public class PostgradStudent extends Student{

	protected String supervisor_name;
	
	public PostgradStudent(String stuName, String progCode, int stuNum, int stuYear, String sup_name)
	{
		super(stuName, progCode, stuNum, stuYear);
		supervisor_name = sup_name;
	}
	
	public void Display()
	{
		System.out.println("Student Name: " + name + "\nStudent Number: " + id_number + "\nProgramme Code: " + programme_code + "\nCurrent Year: " + year + "\nSupervisor_name: " + supervisor_name);
	}
	
	public static void main(String args[])
	{
		PostgradStudent p1;
		p1 = new PostgradStudent("Michael Lenehan", "ECE Postgrad", 15410402, 1, "John Smith");
		p1.Display();
	}
}
