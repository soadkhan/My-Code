import java.util.Scanner;

class main{
	public static void main(String[] args) {
		my_class obj = new my_class("CSE");
		obj.say();
		System.out.println("Again my subject is : "+obj.get_sub());
		obj.seter();
		obj.say();
	}
}