import java.awt.FlowLayout;
import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Calendar;


public class Stop_wa extends Thread {
    private final JFrame frame ;
    private final JButton star ;
    private final JButton rese;
    private final JButton dum1;
    private final JButton dum2;
    private final JButton sh;
    private final JButton stop ;
    private final JLabel label; 
    private final JPanel panel ;
    private int save_time ;
    private int cu_time; 
    private int t_i;
    private String command = new String(); 
    
    
    int fl = -1;
    int sa =  0 ;
    
    private String ss ;
    
    public Stop_wa(){
        panel = new JPanel() ;
        dum1  = new JButton() ;
        dum1.setBackground(Color.WHITE);
        dum2  = new JButton() ;
        dum2.setBackground(Color.WHITE);
        
        sh  = new JButton("00:00:00") ;
        sh.setBackground(Color.GREEN);
        
        frame = new JFrame("stop watch") ;
        frame.setSize(300 , 150);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        frame.setLayout(new FlowLayout());
        panel.setLayout(new GridLayout(2,3));
        
        star = new JButton("START") ;
        rese  = new JButton("RESET") ;
        stop = new JButton("STOP");
        label  = new JLabel("00:00:00") ;
        
        panel.add(star) ;
        panel.add(stop) ;
        panel.add(rese) ;

        panel.add(dum1) ;
        panel.add(sh) ;
        panel.add(dum2) ;
        frame.add(panel) ;
   
        frame.setVisible(true);
        
  
        star.setActionCommand("start");
        stop.setActionCommand("stop");
        rese.setActionCommand("reset");
        
        
        
        star.addActionListener(new go());
        stop.addActionListener(new go());
        rese.addActionListener(new go());
        
        
        start() ;
        
    }
    
    public void run(){
        while(true){
            if(fl== 0 ) {
                Calendar cal = Calendar.getInstance() ;
                
                if(sa == 0){
                    save_time  = cal.get(Calendar.SECOND) + 60*cal.get(Calendar.MINUTE) + 60*60*cal.get(Calendar.HOUR) ;
                    sa = 1 ;
                }
                if(sa==1){
                    cu_time = cal.get(Calendar.SECOND) + 60*cal.get(Calendar.MINUTE) + 60*60*cal.get(Calendar.HOUR) ;
                    t_i = -save_time + cu_time ;
                    String  show  =  new String() ;
                    ss = Integer.toString(t_i/(60*60)) ;
                    t_i = t_i % (60*60) ;
                    ss = ss+ ":" + Integer.toString(t_i / 60) ;
                    t_i = t_i % 60 ; 
                    ss = ss+ ":" + Integer.toString(t_i) ;
                    sh.setText(ss);
                }
                
            }
            if(fl==1) {
               sa = 0 ;
            }
            if(fl==2) {
              sh.setText("00:00:00");
              sa = 0 ; 
            }
            if(frame.isActive()!=true) break ;
        }
    }
    

    public class go implements ActionListener{
        
        public void actionPerformed(ActionEvent ae) {
            command  = ae.getActionCommand() ;
            if(command.equals("start")){
                fl = 0 ; 
            }
            if(command.equals("stop")){
                fl = 1 ;
            }
            if(command.equals("reset")){
                fl = 2 ;    
            }
        }
    
    }

    public static void main(String[] args) {
        Stop_wa ob  = new Stop_wa();
        
    }

}
