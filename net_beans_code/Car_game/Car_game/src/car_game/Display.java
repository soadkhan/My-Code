
package car_game;

import java.awt.Canvas;
import java.awt.Color;
import java.awt.Dimension;
import javax.swing.JFrame;

public final class Display {
    public int hi ;
    public int wi ; 
    public String title ; 
    public static JFrame frame ;
    
    public static Canvas canvas ;
    
    Display(String title  , int hi , int wi ){
        this.hi =  hi ; 
        this.wi = wi ;
        this.title = title ;
        build() ;
    }
    
    public void build(){
        frame  = new JFrame(title) ;
        frame.setSize(hi , wi);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
        
        canvas = new Canvas() ; 
        canvas.setSize(new Dimension(hi , wi));
        
        
        canvas.setBackground(Color.white);
        canvas.setFocusable(false );
        frame.add(canvas) ;
        frame.pack();
        frame.setVisible(true);
    }
  
}
