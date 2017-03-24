import java.util.Scanner;

class array{
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);

		int ara[] = new int[1000];

		System.out.print("How many numbers ? : ");

		int n;

		n = cin.nextInt();

		for(int i = 0 ;i<n;i++){
			ara[i] = cin.nextInt();
		}

		System.out.println("Index\tNumbers");

		for(int  i =0 ;i<n;i++){
			System.out.println(i+"\t"+ara[i]);
		}











	}



}