import java.awt.*;

public class poster extends Canvas{
    public int a, b ;

    poster(int x , int  y){
        a = x ;
        b = y ;
    }
    public void paint(Graphics g){
        g.drawString("soad khan", a, b);
        
    }
    
}
