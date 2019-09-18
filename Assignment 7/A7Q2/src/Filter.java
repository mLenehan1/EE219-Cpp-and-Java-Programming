import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Filter implements ActionListener{

	protected String in, fil;
	protected int i, j;
	JFrame frame = new JFrame("String Filter");
	JLabel l1 = new JLabel("Input String");
	JTextField input = new JTextField(30);
	JLabel l2 = new JLabel("Filter String");
	JTextField filter = new JTextField(30);
	JButton b1 = new JButton("Remove");
	JButton b2 = new JButton("Keep Only");

	public Filter()
	{
		frame.setLayout(new FlowLayout(FlowLayout.CENTER, 40, 20));
		frame.add(l1);
		frame.add(input);
		input.addActionListener(this);
		frame.add(l2);
		frame.add(filter);
		filter.addActionListener(this);
		frame.add(b1);
		b1.addActionListener(this);
		frame.add(b2);
		b2.addActionListener(this);
		frame.pack();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}

	public void actionPerformed(ActionEvent e)
	{
		String in = input.getText(), fil = filter.getText();
		if(e.getActionCommand().equals("Remove"))
		{
			if(in.length() == 0) input.setText("Enter a String");
			else 
			{
				input.setText(in.replaceAll("[" +fil + "]+", ""));
			}
		}
		if(e.getActionCommand().equals("Keep Only"))
		{
			if(in.length()==0) input.setText("Enter a String");
			else
			{
				input.setText(in.replaceAll("[^" +fil + "]+", ""));
			}
		}
	}

	public static void main(String args[])
	{
		new Filter();
	}
}
