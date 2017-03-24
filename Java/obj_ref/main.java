import java.util.Scanner;

class main{
	public static void main(String[] args) {
		Box b1  = new Box();

		b1.h = 10;
		b1.w = 12;
		b1.l = 13;

		Box b2 = b1;

		System.out.print(b2.l + " " + b2.w + " " + b2.h);


	}

}