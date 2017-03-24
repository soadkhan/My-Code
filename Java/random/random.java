import java.util.Scanner;
import java.util.Random;

class random{
	
	public static void main(String[] args) {
		
		Random rand  = new Random();

		for(int i = 0;i<10;i++){
			System.out.println(1+rand.nextInt(6));
		}




	}


}