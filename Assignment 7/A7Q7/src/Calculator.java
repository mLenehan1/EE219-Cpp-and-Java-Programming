import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Calculator implements ActionListener{
	protected int c = 0, first_num = 0, val = 0, new_val;
	JFrame frame = new JFrame("Calculator");
	JPanel topPan = new JPanel(), botPan = new JPanel();
	JLabel screen = new JLabel();
	boolean bool = false;

	public Calculator()
	{
		frame.setSize(200, 400);
		frame.setLayout(new GridLayout(2, 1));
		frame.add(topPan);
		topPan.setSize(200, 100);
		frame.add(botPan);
		topPan.setLayout(new BorderLayout(20, 20));
		topPan.add(screen, BorderLayout.CENTER);
		screen.setOpaque(true);
		screen.setBackground(Color.BLACK);
		screen.setForeground(Color.WHITE);
		botPan.setLayout(new GridLayout(4, 3));
		for(int i = 0; i<12; i++)
		{
			JButton[] b = new JButton[12];
			if(i<10)
			{
				b[i] = new JButton("" + i + "");
				botPan.add(b[i]);
				b[i].addActionListener(this);
			}
			else
			{
				if(i == 10)
				{
					b[i] = new JButton("+");
					botPan.add(b[i]);
					b[i].addActionListener(this);
				}
				else
				{
					b[i] = new JButton("C");
					botPan.add(b[i]);
					b[i].addActionListener(this);
				}
			}
		}
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}

	public void actionPerformed(ActionEvent e)
	{
		if(c<10)
		{
			if(bool == true)
			{
				screen.setText("");
				bool = false;
			}
			switch(e.getActionCommand().toString())
			{
			case "0": {screen.setText(screen.getText().concat("0")); c++;}; break;
			case "1": {screen.setText(screen.getText().concat("1")); c++;}; break;
			case "2": {screen.setText(screen.getText().concat("2")); c++;}; break;
			case "3": {screen.setText(screen.getText().concat("3")); c++;}; break;
			case "4": {screen.setText(screen.getText().concat("4")); c++;}; break;
			case "5": {screen.setText(screen.getText().concat("5")); c++;}; break;
			case "6": {screen.setText(screen.getText().concat("6")); c++;}; break;
			case "7": {screen.setText(screen.getText().concat("7")); c++;}; break;
			case "8": {screen.setText(screen.getText().concat("8")); c++;}; break;
			case "9": {screen.setText(screen.getText().concat("9")); c++;}; break;
			}
		}
		if(e.getActionCommand().equals("+"))
		{
			val = val + Integer.parseInt(screen.getText());
			System.out.println(Integer.parseInt(screen.getText()));
			screen.setText("" + val);
			c = 0;
			bool = true;
		}
		if(e.getActionCommand().equals("C")) {screen.setText(""); c = 0; /*first_num = 0*/;}
	}

	public static void main(String args[])
	{
		new Calculator();
	}
}