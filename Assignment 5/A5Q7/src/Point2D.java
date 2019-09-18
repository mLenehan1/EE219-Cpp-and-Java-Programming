
public class Point2D {
	private double x, y;
	
	public Point2D()
	{};
	public Point2D(double xval, double yval)
	{
		x = xval;
		y = yval;
	}
	
	public void print()
	{
		System.out.println("X value =" + x + "\nY value =" + y + "\n");
	}
	
	public void set(Point2D p)
	{
		x = p.x;
		y = p.y;
	}
	
	public Point2D midpoint(Point2D p1)
	{
		double midx = (p1.x-x)/2, midy = (p1.y-y)/2;
		Point2D p2 = new Point2D(midx, midy);
		System.out.println("" +midx + " " + midy + "\n");
		return p2;
	}
	
	public static void main(String args[])
	{
		Point2D p = new Point2D(1,2);
		p.set(p);
		Point2D p1 = new Point2D(2,4);
		p1.print();
		p.midpoint(p1);
	}

}
