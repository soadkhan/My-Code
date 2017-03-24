
package car_game;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class motor implements KeyListener{
    public int x, y  ;
    public boolean left , right , up , down ; 
    
    
    public motor(){
        
    }
    public void init(){
        Display.frame.addKeyListener(this);
        x = 180 ;
        y = 500 ;
    }
    public void tick(){
        if(left){
            x-=10 ;
        }
        if(right){
            x+=10 ;
        }
      //  if(up){
      //      y-=10 ;
     //   }
      //  if(down){
      //      y+=10 ;
      //  }
        
    }
    public void render(Graphics g ){
        g.setColor(Color.red);
        //g.fillRect(x, y, 50, 60);
        g.drawImage(load_image.plane, x, y, null) ;
        
    }


    public void keyTyped(KeyEvent ke) {
        
       
    }


    public void keyPressed(KeyEvent ke) {
        int source = ke.getKeyCode() ;
        if(source == KeyEvent.VK_RIGHT){
            right = true ; 
        }
        if(source == KeyEvent.VK_LEFT){
            left = true ; 
        }
        //if(source == KeyEvent.VK_UP){
        //    up = true ; 
       // }
       // if(source == KeyEvent.VK_DOWN){
       //     down = true ; 
       // }
        
    }


    public void keyReleased(KeyEvent ke) {
        int source = ke.getKeyCode() ;
        if(source == KeyEvent.VK_RIGHT){
            right = false  ; 
        }
        if(source == KeyEvent.VK_LEFT){
            left = false ; 
        }
        if(source == KeyEvent.VK_UP){
            up = false ; 
        }
        if(source == KeyEvent.VK_DOWN){
            down = false  ; 
        }
        
    }
    
}
