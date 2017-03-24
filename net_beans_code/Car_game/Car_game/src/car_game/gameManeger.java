
package car_game;

import java.awt.Color;
import java.awt.Graphics;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;


public class gameManeger extends Thread{
    public static motor car ; 
    public int s_x = 0 , s_y = 0 ;
    public int sx[] = new int[100]  ; 
    public int sy[] = new int[100]  ; 
    public int ache_x[] = new int[100] ;
    public int ache_y[] = new int[100] ; 
    public int mora[] = new int[100] ;
    public int che[] = new int[100] ;
    public int  score = 0 ;
    public int a, b ; 
    int coutn = 5 ;
    
    public gameManeger(){
        
    }
    
    public void suru(){
        sx[0] = 0 ;
        sy[0] = 0 ;
        
        sx[1] = 100 ;
        sy[1] = 200 ;
        
        sx[2] = 200 ;
        sy[2] = -200 ;
        
        sx[3] = 300  ;
        sy[3] = 100 ;
        
        sx[4] = 250 ;
        sy[4] = -300 ;
        
        sx[5] = 400 ;
        sy[5] = -250 ;
        
        sx[6] = 0 ;
        sy[6] = -350 ;
        
        sx[7] = 350 ;
        sy[7] = -150 ;
        
        sx[8] = 450 ;
        sy[8] = -450 ;
        
        sx[9] = 250 ;
        sy[9] = -550 ;
        
        sx[10] = 350 ;
        sy[10] = -650 ;
        
        sx[11] = 450 ;
        sy[11] = -750 ;
        
        sx[12] = 150 ;
        sy[12] = -850 ;
        
        sx[13] = 50 ;
        sy[13] = -950 ;
        
        sx[14] = 450 ;
        sy[14] = -1050 ;
        
        sx[15] = 350 ;
        sy[15] = 200 ;
        
        sx[16] = 100 ;
        sy[16] = -950 ;
        
        sx[17] = 250 ;
        sy[17] = -350 ;
        
        sx[18] = 150 ;
        sy[18] = -450 ;
        
        sx[8] = 450 ;
        sy[8] = -350 ;
        
        sx[8] = 450 ;
        sy[8] = -350 ;
        for(int  i=  0 ; i<19 ; i++){
            mora[i] = 0 ; 
        }
        
        for(int i = 0 ; i<19 ; i++){
            che[i] = 0 ;
        }
    }
    
    public void init() throws IOException{
        car = new motor() ;
        car.init();
        load_image.init(); 
        suru() ; 
        a = car.x ;
        b = car.y ;
    }
    
    public void tick(){
        car.tick();
        s_y+=4 ; 
    }
    
    public void render(Graphics g){
        
        
        
        g.drawImage(load_image.fullimage , 0 , 0 ,400 , 600 , null) ;
        
        //g.drawImage(load_image.subimage1, 100, 100, null) ;
        //g.drawImage(load_image.subimage2, 0, 0, null) ;
        
        g.setColor(Color.red);
        for(int i = 0 ; i<19 ; i++){
            
                if(sx[0]+s_y>1600){
                    suru() ;
                    s_y = 0 ;
                }
               ache_x[i] = sx[i]+s_x ;
               ache_y[i] = sy[i]+s_y ;
               g.drawImage(load_image.ship,sx[i]+ s_x,sy[i]+s_y, null) ;
               
        }
     
        a = car.x ; 
        b = car.y ; 
        
        for(int i = 0 ; i<19 ; i++){
            if(a>ache_x[i] - 70  && a< ache_x[i] + 70){
                if(b>ache_y[i] && b < ache_y[i] + 70 && mora[i]==0){
                    coutn+=2 ;
                  //  System.out.println(coutn);
                    mora[i] = 1 ;
                }
            }
        }
        
        for(int i = 0 ; i<19 ; i++){
            if(ache_y[i] > 600+70 && che[i] == 0  ) {
                coutn-- ;
                che[i] = 1 ; 
                 
            }
        }
        if(coutn<0){
            suru() ;
            coutn = 5  ;
        }
        g.drawString( "SCORE : "+Integer.toString(coutn) , 50, 50);
   //     System.out.println(a+ " " + b);
   
       
   
        car.render(g);
    }
    
}
