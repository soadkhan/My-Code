import java.util.Scanner;

class my_class{
	public int a;
	public void set_a(){
		Scanner cin  = new Scanner(System.in);
		a = cin.nextInt(); 
	}
	public int get_a(){
		return a ;
	}
	public void print_name(String name){
		System.out.print("My name is : "+name);
	}
}