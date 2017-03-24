import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;



public class Menu {
    public JFrame frame ;
    public JMenuBar menu ;
    
    public JMenu main_menu ;
    public JMenu main_menu2 ;
    
    public JMenuItem item1; 
    public JMenuItem item2; 
    public JMenuItem item3; 
    public JMenuItem item4; 
    
    
    Menu(){
        frame =  new JFrame() ;
        menu = new JMenuBar() ;
        
        main_menu =  new JMenu("file") ;
        main_menu2  =  new JMenu("edit") ;
        
        item1  = new JMenuItem("new") ;
        item2 = new JMenuItem("save");
        
        main_menu.add(item1) ;
        main_menu.add(item2) ;
        
        item3  = new JMenuItem("copy") ;
        item4 = new JMenuItem("pest");
        
        main_menu2.add(item3) ;
        main_menu2.add(item4) ;
        
        frame.setSize(400 , 400);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        
        
        menu.add(main_menu) ;
        menu.add(main_menu2) ;
        
        frame.setJMenuBar(menu); 
        frame.setVisible(true);
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        Menu obj = new Menu() ;
    }
    
}
