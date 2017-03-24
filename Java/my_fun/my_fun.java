import java.util.Scanner;

class my_fun{
	
	public static void fun(int x[]){
		for(int  i = 0 ; i<x.length ;i++)
			x[i]+=10;
		
	}

	public static void print(int x[]){
		for(int i = 0;i<x.length;i++)
			System.out.println(x[i]);
	}

	public static void main(String[] args) {
		int x[] = {1,2,3,4,5};

		fun(x);

		print(x);
	
	}

}