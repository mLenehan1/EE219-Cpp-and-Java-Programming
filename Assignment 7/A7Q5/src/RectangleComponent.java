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
		for(int i = 0; i<20; i++)
		{
			for(int j = 0; j<20; j++)
			{

				g.setColor(colour);
				g.fillRect(1, 1, width, height);
			}
		}
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
		frame.setLayout(new GridLayout(20, 20));
		for(int i = 0; i<20*20; i++)
		{
			RectangleComponent rect = new RectangleComponent(200, 200, Color.BLACK);
			frame.add(rect);
		}
		frame.setSize(1000, 1000);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}
}
