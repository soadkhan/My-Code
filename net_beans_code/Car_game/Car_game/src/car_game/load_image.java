
package car_game;

import java.awt.image.BufferedImage;
import java.io.IOException;
import javax.imageio.ImageIO;


public class load_image {
    public static BufferedImage fullimage , subimage1 , subimage2 , plane  , ship , ship2; 
    
    
    
    public static void init() throws IOException{
        fullimage  =  imageloader("/back.jpg") ;
        plane = imageloader("/image.png") ;
       ship = imageloader("/ship.png") ;
        ship2 = imageloader("/ship.png") ;
        crop() ;
        
    }
    public static BufferedImage imageloader(String path) throws IOException{
        return ImageIO.read(load_image.class.getResource(path)) ;
    }
    
    
    public static void crop(){
        subimage1 = fullimage.getSubimage(100, 100, 100, 100) ;
        subimage2 = fullimage.getSubimage(400, 400, 500, 300) ;
    }
    
    
}
