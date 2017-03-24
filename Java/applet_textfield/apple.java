import java.awt.*;
import java.applet.*;

public class apple extends Applet{
	public TextField tx1 , tx2 ;
	public void init(){
		tx1 = new TextField(10);
		tx2 =  new TextField(10);
		this.add(tx1);
		this.add(tx2);
		tx1.setText("");
		tx2.setText("");
	}
	public void paint(Graphics g){
		int x1 = 0 , x2=0, sum = 0;
		String ss , s1,s2 ;
		try{
			s1 = tx1.getText();
			s2 = tx2.getText();
			x1 = Integer.parseInt(s1);
			x2 = Integer.parseInt(s2);
		}
		catch(Exception e){}
		sum  = x1 + x2 ;
		ss= String.valueOf(sum) ;
		g.drawString(ss , 80,80);
	}
	public boolean action(Event event , Object obj){
		repaint();
		return true; 
	}
}