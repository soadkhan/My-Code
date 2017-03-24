import java.util.Scanner;

class my_class{
	private String sub ;
	public  my_class(String set_sub){
		sub = set_sub;
	}
	public String get_sub(){
		return sub;
	}
	public void say(){
		System.out.println("MY subject is : "+sub);
	}
	public void seter(){
		Scanner cin  = new Scanner(System.in);
		sub  = cin.nextLine();
	}
}