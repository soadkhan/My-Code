import java.awt.FlowLayout;
import java.util.Calendar;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JButton;
import javax.swing.JFrame;


public class Watch extends Thread{
    JFrame frame ;
    JButton button ;
    
    public Watch(){
        frame = new JFrame("digital watch") ;
        frame.setSize(200, 100);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        
        button =  new JButton() ;
        frame.setLayout(new FlowLayout());
        frame.add(button) ;
        frame.setVisible(true);
        start() ;
    }
    
    public void run(){
        while(true){
            try {
                Calendar cal  = Calendar.getInstance() ;
                int s = cal.get(Calendar.SECOND) ;
                int m = cal.get(Calendar.MINUTE) ;
                int h = cal.get(Calendar.HOUR) ;
                String ss  = Integer.toString(h) + " : " + Integer.toString(m) + " : " + Integer.toString(s) ;
                button.setText(ss);
                frame.setVisible(true);
                sleep(1000) ;
                if(frame.isActive()!=true) break ;
            } catch (InterruptedException ex) {
                Logger.getLogger(Watch.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
    
    
    public static void main(String[] args) {
        Watch wa = new Watch() ;
       
    }
    
}
