import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;

import javax.imageio.ImageIO;
import javax.swing.JPanel;
public class panel extends JPanel{ // import JPanel
      BufferedImage image ; // here we have to import java.awt..image.BufferedImage 
      public panel(){
          try{
              image = ImageIO.read(new File("D:/Contest Pic/a.jpg")); // import java.io.File
          }
          catch(Exception e){}
      }
      public void  paintComponent(Graphics g){
          g.drawImage(image ,0 , 0 , null) ; // awt gor graphics
      }
}
