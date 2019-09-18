
public class Student {
	protected String name, programme_code;
	protected int id_number, year;
	
	public Student(String stuName, String progCode, int stuNum, int stuYear)
	{
		name = stuName;
		programme_code = progCode;
		id_number = stuNum;
		year = stuYear;
	}
	
	public void Display()
	{
		System.out.println("Student Name: " + name + "\nStudent Number: " + id_number + "\nProgramme Code: " + programme_code + "\nCurrent Year: " + year);
	}
	
	public static void main(String args[])
	{
		Student s1;
		s1 = new Student("Michael Lenehan", "ECE", 15410402, 2);
		s1.Display();
	}
}
