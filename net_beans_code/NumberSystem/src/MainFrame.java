import java.awt.Color;
import java.awt.Dimension;
import java.awt.EventQueue;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;

import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JPanel;
import java.awt.Font;
import javax.swing.JLabel;
import javax.swing.ImageIcon;

public class MainFrame {

	private JFrame frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					MainFrame window = new MainFrame();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public MainFrame() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame("Number System.");
		frame.getContentPane().setFont(new Font("Tahoma", Font.BOLD, 11));
		frame.setIconImage(Toolkit.getDefaultToolkit().getImage(new File("src\\Res\\Image.png").getAbsolutePath()));
		frame.getContentPane().setBackground(new Color(102, 204, 255));
		frame.setBounds(100, 100, 717, 280);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setResizable(false);
		Dimension dimension = Toolkit.getDefaultToolkit().getScreenSize();
	    int x = (int) ((dimension.getWidth() - frame.getWidth()) / 2);
	    int y = (int) ((dimension.getHeight() - frame.getHeight()) / 2);
	    frame.setLocation(x, y);
	    frame.getContentPane().setLayout(null);
	    
	    JButton btnNewButton = new JButton("Converter");
	    btnNewButton.setFont(new Font("Times New Roman", Font.BOLD, 25));
	    btnNewButton.setBounds(226, 124, 225, 53);
	    frame.getContentPane().add(btnNewButton);
	    btnNewButton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Converter ob=new Converter();
				frame.dispose();
				ob.Main();
			}
		});
	    
	    JButton btnCalculator = new JButton("Calculator");
	    btnCalculator.setFont(new Font("Times New Roman", Font.BOLD, 24));
	    btnCalculator.setBounds(226, 188, 225, 53);
	    frame.getContentPane().add(btnCalculator);
	    
	    btnCalculator.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Calculator ob= new Calculator();
				frame.dispose();
				ob.Main();
			}
		});
	    
	    JPanel panel = new JPanel();
	    panel.setBackground(new Color(51, 153, 255));
	    panel.setBounds(10, 11, 691, 102);
	    frame.getContentPane().add(panel);
	    panel.setLayout(null);
	    
	    JLabel LB_1 = new JLabel("");
	    LB_1.setBounds(0, 0, 691, 102);
	  //  LB_1.setHorizontalAlignment(SwingConstants.CENTER);
	   // LB_1.setFont(new Font("Times New Roman", Font.BOLD, 43));
	    LB_1.setIcon(new ImageIcon(new File("src\\Res\\ok.jpg").getAbsolutePath()));
	    panel.add(LB_1);
	}
}
