import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BaseConverter implements KeyListener{
	JFrame frame = new JFrame("Base Converter");
	String[] Base = new String[]{"Duodecimal", "Hexidecimal", "Decimal", "Octal", "Binary"};
	int b1, b2;
	char key;
	JComboBox<String> drop1 = new JComboBox<>(Base), drop2 = new JComboBox<>(Base);
	JTextField in = new JTextField(), out = new JTextField();

	public BaseConverter()
	{
		frame.setSize(400, 200);
		frame.setLayout(new GridLayout(2, 2, 20, 20));
		frame.add(in);
		in.addKeyListener(this);
		frame.add(out);
		out.addKeyListener(this);
		frame.add(drop1);
		frame.add(drop2);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}

	public void keyPressed(KeyEvent e)
	{
		key = e.getKeyChar();
		valid();
	}

	public void keyTyped(KeyEvent e)
	{
		if(valid()==false)
		{
			e.consume(); 
			return;
		}
	}

	public void keyReleased(KeyEvent e)
	{
		convert();
	}

	public void displayInfo(KeyEvent e, String keyStatus){}

	public boolean valid(){
		switch(b1)
		{
		case 12: if(key >= '0' &&  key <= '9' || key == 'a' || key == 'b' || key == 'A' || key == 'B')return true; break;
		case 16: if(key >= '0' && key <= '9' || key >= 'a' && key <='f' || key >='A' && key <= 'F')return true; break;
		case 10: if(key >= '0' && key <= '9') return true; break;
		case 8: if(key >= '0' && key <= '7') return true; break;
		case 2: if(key >= '0' && key <= '1') return true; break;
		default: break;
		}
		return false;
	}
	public void convert()
	{
		switch(drop1.getSelectedItem().toString())
		{
		case "Duodecimal": b1 = 12; break;
		case "Hexidecimal": b1 = 16; break;
		case "Decimal": b1 = 10; break;
		case "Octal": b1 = 8; break;
		case "Binary": b1 = 2; break;
		default:break;
		}
		switch(drop2.getSelectedItem().toString())
		{
		case "Duodecimal": b2 = 12; break;
		case "Hexidecimal": b2 = 16; break;
		case "Decimal": b2 = 10; break;
		case "Octal": b2 = 8; break;
		case "Binary": b2 = 2; break;
		default:break;
		}
		out.setText(Long.toString(Long.parseLong(in.getText(), b1), b2));
	}

	public static void main(String args[])
	{
		new BaseConverter();
	}
}