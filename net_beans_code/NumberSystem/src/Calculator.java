import java.awt.Color;
import java.awt.Dimension;
import java.awt.EventQueue;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.io.File;

import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import java.awt.Font;
import javax.swing.JPanel;
import javax.swing.DefaultComboBoxModel;

public class Calculator {

	private JFrame frame;
	private JTextField A_TB;
	private JTextField B_TB;
	private JTextField Ans_TB;
	CheckNumber ck=new CheckNumber(); 
	Calculate cl= new Calculate();

	/**
	 * Launch the application.
	 */
	public void Main() {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Calculator window = new Calculator();
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
	public Calculator() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame("Number System Calculator.");
		frame.setIconImage(Toolkit.getDefaultToolkit().getImage(new File("src\\Res\\Image.png").getAbsolutePath()));
		frame.getContentPane().setFont(new Font("Times New Roman", Font.BOLD | Font.ITALIC, 11));
		frame.getContentPane().setBackground(new Color(102, 204, 255));
		frame.setBounds(100, 100, 717, 283);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setResizable(false);
		Dimension dimension = Toolkit.getDefaultToolkit().getScreenSize();
	    int x = (int) ((dimension.getWidth() - frame.getWidth()) / 2);
	    int y = (int) ((dimension.getHeight() - frame.getHeight()) / 2);
	    frame.setLocation(x, y);
	    frame.getContentPane().setLayout(null);
	    
	    A_TB = new JTextField();
	    A_TB.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    A_TB.setHorizontalAlignment(SwingConstants.CENTER);
	    A_TB.setBounds(10, 142, 278, 44);
	    frame.getContentPane().add(A_TB);
	    A_TB.setColumns(10);
	    
	    B_TB = new JTextField();
	    B_TB.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    B_TB.setHorizontalAlignment(SwingConstants.CENTER);
	    B_TB.setColumns(10);
	    B_TB.setBounds(433, 142, 268, 44);
	    frame.getContentPane().add(B_TB);
	    
	    Ans_TB = new JTextField();
	    Ans_TB.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    Ans_TB.setHorizontalAlignment(SwingConstants.CENTER);
	    Ans_TB.setColumns(10);
	    Ans_TB.setBounds(433, 197, 268, 44);
	    frame.getContentPane().add(Ans_TB);
	    
	    JButton btnNewButton = new JButton("Calculate");
	    btnNewButton.setFont(new Font("Times New Roman", Font.PLAIN, 21));
	    btnNewButton.setBounds(157, 197, 131, 45);
	    frame.getContentPane().add(btnNewButton);
	   
	    
	    JComboBox Operation_CB = new JComboBox();
	    Operation_CB.setFont(new Font("Times New Roman", Font.BOLD, 40));
	    Operation_CB.setModel(new DefaultComboBoxModel(new String[] {"", "   +", "   -", "   *", "   /"}));
	    Operation_CB.setToolTipText("");
	    Operation_CB.setBounds(304, 142, 108, 44);
	    frame.getContentPane().add(Operation_CB);
	    
	    JLabel lblNewLabel = new JLabel("RESULT: ");
	    lblNewLabel.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    lblNewLabel.setHorizontalAlignment(SwingConstants.CENTER);
	    lblNewLabel.setBounds(315, 197, 108, 44);
	    frame.getContentPane().add(lblNewLabel);
	    
	    JButton btnBack = new JButton("BACK");
	    btnBack.setFont(new Font("Times New Roman", Font.PLAIN, 20));
	    btnBack.setBounds(10, 197, 125, 45);
	    frame.getContentPane().add(btnBack);
	    
	    btnBack.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				MainFrame ob=new MainFrame();
				frame.dispose();
				String[] arg=null;
				ob.main(arg);
			}
		});
	    
	    JComboBox Choise_CB = new JComboBox();
	    Choise_CB.setFont(new Font("Times New Roman", Font.BOLD, 30));
	    Choise_CB.setModel(new DefaultComboBoxModel(new String[] {"", "Binary", "Decimal", "Octal", "Hexadecimal"}));
	    Choise_CB.setBounds(209, 87, 278, 44);
	    frame.getContentPane().add(Choise_CB);
	    
	    JPanel panel = new JPanel();
	    panel.setBackground(new Color(51, 153, 255));
	    panel.setBounds(10, 11, 691, 65);
	    frame.getContentPane().add(panel);
	    panel.setLayout(null);
	    
	    JLabel lblNewLabel_1 = new JLabel("Number System Calculator.");
	    lblNewLabel_1.setFont(new Font("Times New Roman", Font.BOLD | Font.ITALIC, 35));
	    lblNewLabel_1.setHorizontalAlignment(SwingConstants.CENTER);
	    lblNewLabel_1.setBounds(0, 0, 681, 65);
	    panel.add(lblNewLabel_1);
	    
        btnNewButton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				if(A_TB.getText()=="" || B_TB.getText()==""|| Choise_CB.getSelectedItem().toString()=="" || 
						Operation_CB.getSelectedItem().toString()==""){
					Ans_TB.setText("INVALID");
					
				}
				else{
					if(ck.Check(Choise_CB.getSelectedItem().toString(), A_TB.getText())){
						
						if(ck.Check(Choise_CB.getSelectedItem().toString(), B_TB.getText())){
							String Tm=cl.calculate(Choise_CB.getSelectedItem().toString(),
									Operation_CB.getSelectedItem().toString(), A_TB.getText(), B_TB.getText());
							Ans_TB.setText(Tm);
						}
						else {
							Ans_TB.setText("INVALID");
							B_TB.setText("");
						}
					}
					else{
						Ans_TB.setText("INVALID");
						A_TB.setText("");
					}
				}
				
			}
		});
        
        A_TB.addKeyListener(new KeyAdapter() {
         	   public void keyTyped(KeyEvent e) {
         		  Ans_TB.setText("");
         		 char keyChar = e.getKeyChar();
				    if (Character.isLowerCase(keyChar)) {
				      e.setKeyChar(Character.toUpperCase(keyChar));
				 }
     		 }
		});
        Choise_CB.addItemListener(new ItemListener() {
			
			@Override
			public void itemStateChanged(ItemEvent arg0) {
				// TODO Auto-generated method stub
				A_TB.setText("");
				B_TB.setText("");
			}
		});
        B_TB.addKeyListener(new KeyAdapter() {
        	public void keyTyped(KeyEvent e) {
       		  Ans_TB.setText("");
       		char keyChar = e.getKeyChar();
		    if (Character.isLowerCase(keyChar)) {
		      e.setKeyChar(Character.toUpperCase(keyChar));
		       }
   			 }
		});
       Ans_TB.addKeyListener(new KeyAdapter() {
    	   public void keyTyped(KeyEvent e) {
				 e.consume();
			 }
	  });
 
	}
}
