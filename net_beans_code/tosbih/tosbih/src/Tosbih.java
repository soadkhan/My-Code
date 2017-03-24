import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import javax.swing.*;
import java.awt.event.*;


public class Tosbih {
    public  JFrame frame ;
    public JButton button ;
    public JButton new_count ;
    
    public JPanel panel ;
    public int count = 0 ;
    public JLabel lebel ;
    public void begin(){
        frame = new JFrame("tosbih");
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        frame.setSize(200, 100);
        frame.setVisible(true);
    }
    
    public void configure(){
        frame.setLayout(new FlowLayout());
        panel = new JPanel();
        lebel = new JLabel("",JLabel.CENTER);
        lebel.setText("count : 0 ");
        button  =  new JButton("tosbih");
        new_count = new JButton("refresh");
        new_count.setBackground(Color.green);
        button.setBackground(Color.yellow);
        panel.setLayout(new GridLayout(0,2));
        panel.add(button) ;
        panel.add(new_count);
        panel.add(lebel);
        frame.add(panel) ;
        frame.setVisible(true);
    }
    
    public void action(){
        button.setActionCommand("count");
        new_count.setActionCommand("refresh");
        
        button.addActionListener(new go());
        new_count.addActionListener(new go());
        
        frame.setVisible(true);
    }
    
     public class go implements ActionListener{
        public void actionPerformed(ActionEvent ae) {
            String command = ae.getActionCommand() ;
            if(command.equals("count")){
                count++;
                String sc = new String();
                sc  = Integer.toString(count) ;
                sc = "count : " + sc ;
                lebel.setText(sc);
            }
            else{
                count = 0 ;
                lebel.setText("count : 0 ");
            }
        }
        
    }
   
    public static void main(String[] args) {
        Tosbih b = new Tosbih() ;
        b.begin();
        b.configure();
        b.action();
    }
    
    
}
