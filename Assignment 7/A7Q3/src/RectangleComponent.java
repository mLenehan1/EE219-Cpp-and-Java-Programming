import java.awt.*;
import javax.swing.*;

public class RectangleComponent extends JComponent{
	private int width, height;
	private Color colour;

	public RectangleComponent(int w, int h, Color c)
	{
		width = w;
		height = h;
		colour = c;
	}

	public void paintComponent(Graphics g)
	{
		g.setColor(colour);
		g.fillRect(1, 1, width, height);
	}

	public static void main(String args[])
	{
		JFrame frame = new JFrame("Rectangle");
		frame.add(new RectangleComponent(20, 20, Color.BLACK));
		frame.setSize(200, 100);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}
}
