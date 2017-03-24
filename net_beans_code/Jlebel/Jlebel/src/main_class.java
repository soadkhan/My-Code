import javax.swing.*;

public class main_class{
    public static void main(String[] args){
        JFrame frame = new JFrame("bismillah");
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        JButton button = new JButton("bismillah");
        button.setBounds(200, 200,100, 100);
        frame.add(button) ;
        frame.setSize(500, 500);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}