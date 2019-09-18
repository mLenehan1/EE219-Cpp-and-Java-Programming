import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class UpperLower implements ActionListener{

	protected String in;
	JFrame frame = new JFrame("UpperLower");
	JTextField input = new JTextField(30);
	JButton button = new JButton("Change Case");

	public UpperLower()
	{
		frame.setLayout(new FlowLayout(FlowLayout.CENTER, 40, 20));

		frame.add(input);
		input.addActionListener(this);

		frame.add(button);
		button.addActionListener(this);

		frame.pack();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}

	public void actionPerformed(ActionEvent e)
	{
		if(e.getActionCommand().equals("Change Case"))
		{
			String in = input.getText();
			input.setText(ChangeCase(in));
			System.out.println(ChangeCase(in));
		}
	}

	public static String ChangeCase(String str)
	{
		char[] c = str.toCharArray();
		if(str.length() == 0)
			return "Enter a String";
		else 
		{
			for(int i = 0; i<str.length()-1; i++)
			{
				if(Character.isLowerCase(str.charAt(i))) 
				{
					c[i] = Character.toUpperCase(str.charAt(i));
				}
				else c[i] = Character.toLowerCase(str.charAt(i));
			}
		}
		return str = String.valueOf(c);
	}


	public static void main(String args[])
	{
		new UpperLower();
	}
}
