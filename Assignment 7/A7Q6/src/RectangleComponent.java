import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class RectangleComponent extends JComponent implements MouseListener, ActionListener{

	private int width, height;
	private Color colour;
	static JFrame frame = new JFrame("Rectangle");
	protected static JButton b = new JButton("Invert");

	public RectangleComponent(int w, int h, Color c) // Rectangle constructor
	{ 
		width = w;
		height = h;
		colour = c;
		this.addMouseListener(this);
	}

	public void paintComponent(Graphics g) // Paints all 400 Rectangles, and adds buttons action listener
	{
		for(int i = 0; i<20; i++)
		{
			for(int j = 0; j<20; j++)
			{

				g.setColor(colour);
				g.fillRect(1, 1, width, height);
			}
		}
		b.addActionListener((ActionListener) this);
	}

	public void mouseClicked(MouseEvent e) //Gives colour changes on mouse clicks
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

	public void actionPerformed(ActionEvent e) //Method reacts slowly if some squares have already been changed
											   //Changes Colour of all Rectangles in the frame
	{
		if(e.getActionCommand().equals("Invert"))
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
	}

	public static void main(String args[])
	{
		frame.setLayout(new GridLayout(21, 20));
		for(int i = 0; i<20*20; i++)
		{
			RectangleComponent rect = new RectangleComponent(200, 200, Color.BLACK);
			frame.add(rect);
		}
		b.setSize(new Dimension(200, 600));
		frame.add(b);
		frame.setSize(1000, 1000);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}
}
