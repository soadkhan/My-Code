import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.io.File;
import java.awt.Color;
import java.awt.Dimension;

import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import java.awt.Font;
import javax.swing.JTextField;
import javax.swing.SwingConstants;
import javax.swing.JLabel;
import javax.swing.JButton;

public class Converter {
	private boolean Status=true;
	private JFrame frmConveter;
	private JTextField From_TB;
	private JTextField To_TB;
	private String Binary=null;
	CheckNumber Chk=new CheckNumber();
	ConvertNumber Cnvt= new ConvertNumber();
	FileIO FIO=new FileIO();

	/**
	 * Launch the application.
	 */
	public void Main() {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Converter window = new Converter();
					window.frmConveter.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Converter() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frmConveter = new JFrame("Number System Converter.");
		frmConveter.setIconImage(Toolkit.getDefaultToolkit().getImage(new File("src\\Res\\Image.png").getAbsolutePath()));
		frmConveter.getContentPane().setBackground(new Color(102, 204, 255));
		frmConveter.setBounds(100, 100, 717, 313);
		frmConveter.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frmConveter.setResizable(false);
		Dimension dimension = Toolkit.getDefaultToolkit().getScreenSize();
	    int x = (int) ((dimension.getWidth() - frmConveter.getWidth()) / 2);
	    int y = (int) ((dimension.getHeight() - frmConveter.getHeight()) / 2);
	    frmConveter.setLocation(x, y);
		frmConveter.getContentPane().setLayout(null);
	    
		
		JPanel panel = new JPanel();
		panel.setBounds(10, 11, 692, 69);
		panel.setBackground(new Color(0, 153, 255));
		frmConveter.getContentPane().add(panel);
		panel.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Number System Converter.");
		lblNewLabel.setFont(new Font("Times New Roman", Font.BOLD | Font.ITALIC, 37));
		lblNewLabel.setBackground(new Color(240, 240, 240));
		lblNewLabel.setBounds(150, 11, 422, 47);
		panel.add(lblNewLabel);
		
		JComboBox From_CB = new JComboBox();
		From_CB.setBounds(10, 142, 341, 46);
		From_CB.setFont(new Font("Times New Roman", Font.BOLD, 20));
		From_CB.setToolTipText("");
		From_CB.setModel(new DefaultComboBoxModel(new String[] {"Binary", "Decimal", "Octal", "Hexadecimal"}));
		From_CB.setSelectedItem("");
		frmConveter.getContentPane().add(From_CB);
		
		JComboBox To_CB = new JComboBox();
		To_CB.setBounds(361, 142, 341, 46);
		To_CB.setFont(new Font("Times New Roman", Font.BOLD, 20));
		To_CB.setModel(new DefaultComboBoxModel(new String[] {"Binary", "Decimal", "Octal", "Hexadecimal",""}));
		To_CB.setSelectedItem("");
		frmConveter.getContentPane().add(To_CB);
		
		From_TB = new JTextField();
		From_TB.setBounds(10, 199, 341, 46);
		From_TB.setFont(new Font("Times New Roman", Font.BOLD, 20));
		frmConveter.getContentPane().add(From_TB);
		From_TB.setHorizontalAlignment(SwingConstants.CENTER);
		From_TB.setColumns(10);
		
		To_TB = new JTextField();
		To_TB.setBounds(361, 199, 341, 46);
		To_TB.setFont(new Font("Times New Roman", Font.BOLD, 20));
		To_TB.setColumns(10);
		To_TB.setHorizontalAlignment(SwingConstants.CENTER);
		frmConveter.getContentPane().add(To_TB);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBounds(106, 100, 504, 31);
		panel_1.setBackground(new Color(0, 153, 204));
		frmConveter.getContentPane().add(panel_1);
		panel_1.setLayout(null);
		
		JLabel lblNewLabel_1 = new JLabel("Binary, Decimal,Octal,Hexadecimal.");
		lblNewLabel_1.setBounds(111, 0, 383, 31);
		lblNewLabel_1.setFont(new Font("Times New Roman", Font.ITALIC, 18));
		panel_1.add(lblNewLabel_1);
		
		JButton BackWard = new JButton("<<");
		BackWard.setBounds(10, 100, 76, 31);
		BackWard.setFont(new Font("Times New Roman", Font.BOLD | Font.ITALIC, 34));
		frmConveter.getContentPane().add(BackWard);
		
		JButton Forward = new JButton(">>");
		Forward.setBounds(626, 100, 76, 31);
		Forward.setFont(new Font("Times New Roman", Font.BOLD | Font.ITALIC, 34));
		frmConveter.getContentPane().add(Forward);
		
		JButton btnNewButton = new JButton("BACK");
		btnNewButton.setFont(new Font("Times New Roman", Font.PLAIN, 14));
		btnNewButton.setBounds(274, 256, 170, 23);
		frmConveter.getContentPane().add(btnNewButton);
		btnNewButton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				MainFrame ob=new MainFrame();
				frmConveter.dispose();
				String[] args=null;
				ob.main(args);
			}
		});
		
		
		From_CB.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				//From_TB.setText(From_CB.getSelectedItem().toString());
				From_TB.setText("");
				To_CB.setSelectedItem("");
				To_TB.setText("Select An Item");
				
				
			}
		});
		
		
		To_CB.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				String Form_Select=From_CB.getSelectedItem().toString();
				String To_Select=To_CB.getSelectedItem().toString();
				String Number=From_TB.getText();
				
				if(To_Select.equals("")){
					To_TB.setText("INVALID");
				}
				else if(!Chk.Check(Form_Select, Number)){
					From_CB.setSelectedItem("");
					To_TB.setText("INVALID");
				}
				else{
					
					Binary=Cnvt.To_Bin(Form_Select, Number);
					String TTB=Cnvt.Bin_To(To_Select, Binary);
					if(Status)
					FIO.File_Write(Form_Select, Number, To_Select, TTB, "\\Forward.Text");
					To_TB.setText(TTB);
					Status=true;
				}
			}
		});
		
		From_TB.addKeyListener(new KeyAdapter() {//This is use to make char always upper case.
			 public void keyTyped(KeyEvent e) {
				    char keyChar = e.getKeyChar();
				    if (Character.isLowerCase(keyChar)) {
				      e.setKeyChar(Character.toUpperCase(keyChar));
				    }
				  }
		});
		
		Forward.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Status=false;
				FIO.File_Read("\\Backward.Text");
				if(FIO.F_Cb!=null){
					FIO.File_Write(FIO.F_Cb, FIO.F_Tb, FIO.T_Cb, FIO.T_Tb,"\\Forward.Text");
					From_CB.setSelectedItem(FIO.F_Cb);
					From_TB.setText(FIO.F_Tb);
					To_CB.setSelectedItem(FIO.T_Cb);
					To_TB.setText(FIO.T_Tb);
			   }
				else {
					//To_CB.setSelectedItem(null);
				    From_CB.setSelectedItem("");
				    From_TB.setText("");
				}
			}
		});
		
		BackWard.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Status=false;
				FIO.File_Read("\\Forward.Text");
				if(FIO.F_Cb!=null){
				FIO.File_Write(FIO.F_Cb, FIO.F_Tb, FIO.T_Cb, FIO.T_Tb,"\\Backward.Text");
				From_CB.setSelectedItem(FIO.F_Cb);
				From_TB.setText(FIO.F_Tb);
				To_CB.setSelectedItem(FIO.T_Cb);
				To_TB.setText(FIO.T_Tb);
				}
				else {
					//To_CB.setSelectedItem(null);
				    From_CB.setSelectedItem("");
				    From_TB.setText("");
			  }
			}
		});
		
		To_TB.addKeyListener(new KeyAdapter() {
			 public void keyTyped(KeyEvent e) {
				 e.consume();
			 }
		});
	}
}

