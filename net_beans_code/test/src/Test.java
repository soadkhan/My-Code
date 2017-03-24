
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;


public class Test {
    public  JFrame frame ; 
    public  JButton button ;
    public JPanel panel ;  
    public int a ;
    

    public void begin(){
        a = 0 ;
        frame = new JFrame("test") ;
        frame.setSize(100,100);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        frame.setVisible(true);
    }
    
    public void  adding(){
        button = new JButton("test") ;
        panel  = new JPanel() ;
        panel.setLayout(new FlowLayout());
        frame.setLayout(new FlowLayout());
        
        panel.add(button) ;
        frame.add(panel) ;
        
        button.setActionCommand("testing");
        frame.setVisible(true) ;
    }
     public void action(){
         button.addActionListener(new go());
     }
    
    public static void main(String[] args) {
        Test b = new Test() ;
        b.begin();
        b.adding();
        b.action();
    }
    
    
    public class go implements ActionListener{

        @Override
        public void actionPerformed(ActionEvent ae) {
            String cmd = ae.getActionCommand() ;
            
            if(cmd.equals("testing")){
                a++ ; 
                if(a%2==1){
                    button.setText("testing");
                }
                else{
                    button.setText("tested");
                }
            }
           
        }      
        
    }
    
}
