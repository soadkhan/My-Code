
package car_game;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.image.BufferStrategy;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

public class set_up implements Runnable{
    
    public Thread thread ; 
    public Display display ; 
    public int hi , wi  ;
    public String title ; 
    
    public BufferStrategy buffer ; 
    public Graphics g ;
    
    public gameManeger maneger ;
    
    set_up( String title , int hi , int wi  ){
        this.title = title ; 
        this.hi = hi ;
        this.wi = wi ; 
        
        
    }
    
    
    public void init() throws IOException{
        display = new Display(title , hi , wi) ;
        maneger  = new gameManeger() ;
        maneger.init(); 
        
    }
    
    
    
    public synchronized void start(){
        if(thread == null){
            thread = new Thread(this) ;
            
            thread.start(); 
            
        }
        
    } 
    
    public synchronized void stop(){
        try {
            thread.join();
        } catch (InterruptedException ex) {
            Logger.getLogger(set_up.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }
    
    
    public void render(){
        buffer  = Display.canvas.getBufferStrategy(); 
        if(buffer == null){
            Display.canvas.createBufferStrategy(3);
            return ; 
            
        }
        g = buffer.getDrawGraphics() ; 
        g.clearRect(0, 0, 1000, 1000);
        
        
        maneger.render(g);
        
        
        buffer.show(); 
        g.dispose(); 
        
    }
    
    
    public void tick(){
        maneger.tick(); 
    }
    
    
    public void run() {
        try {
            init() ;
        } catch (IOException ex) {
            Logger.getLogger(set_up.class.getName()).log(Level.SEVERE, null, ex);
        }
        int fps = 50 ; 
        double timePertick = 1000000000/fps ;
        double delta = 0 ;
        long current  = System.nanoTime() ;
        
        while(true){
            
            delta =  delta + (System.nanoTime() - current )/ timePertick ;
            current  = System.nanoTime() ;
            if(delta>=1){
                tick() ;       
                render() ;
                delta-- ;
            }
            
        }
        
    }
    
}
