import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class RectangleComponent extends JComponent implements MouseListener{
	private int width, height;
	private Color colour;

	public RectangleComponent(int w, int h, Color c)
	{
		width = w;
		height = h;
		colour = c;
		this.addMouseListener(this);
	}

	public void paintComponent(Graphics g)
	{
		g.setColor(colour);
		g.fillRect(1, 1, width, height);
	}

	public void mouseClicked(MouseEvent e)
	{
		if(colour == Color.BLACK)
		{
			colour = Color.WHITE;
			repaint();
		}
		else
		{
			colour = Color.BLACK;
			repaint();
		}

	}

	public void mouseEntered(MouseEvent e){}
	public void mouseExited(MouseEvent e){}
	public void mousePressed(MouseEvent e){}
	public void mouseReleased(MouseEvent e){}

	public static void main(String args[])
	{
		JFrame frame = new JFrame("Rectangle");
		RectangleComponent rect = new RectangleComponent(20, 20, Color.BLACK);
		frame.add(rect);
		frame.setSize(200, 200);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}
}
