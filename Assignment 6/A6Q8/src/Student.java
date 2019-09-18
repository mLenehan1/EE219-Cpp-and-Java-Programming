
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
}
