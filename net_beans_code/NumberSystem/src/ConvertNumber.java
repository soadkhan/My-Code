/*
 * This Class Is responsible For Converting
 * Here Only  two method is accessible for outside
 * both return String type
 * Here we try to use a format...
 * Something to bin & bin to something.
 * Something cover 4 different based number.
 */
import java.math.BigInteger;

public class ConvertNumber {
	
	String To_Bin(String Select,String Number){
		if(Select.equals("Binary")) return Number;
		if(Select.equals("Decimal")) return Dec_To_Bin(Number);
		if(Select.equals("Octal")) return Oct_To_Bin(Number);
		if(Select.equals("Hexadecimal")) return Hex_To_Bin(Number);
		
		return "";
	}
	
	String Bin_To(String Select,String Number){
		if(Select.equals("Binary")) return Number;
		if(Select.equals("Decimal")) return Bin_To_Dec(Number);
		if(Select.equals("Octal")) return Bin_To_Oct(Number);
		if(Select.equals("Hexadecimal")) return  Bin_To_Hex(Number);
		return "";
	}
	
	private String Hex_To_Bin(String Number){
		BigInteger ToNumber=new BigInteger(Number,16);
		String s=ToNumber.toString(2);
		return s;
	}
	
	private String Dec_To_Bin(String Number){
		BigInteger ToNumber=new BigInteger(Number,10);
		String s=ToNumber.toString(2);
		return s;
	}
	
	private String Oct_To_Bin(String Number){
		BigInteger ToNumber=new BigInteger(Number,8);
		String s=ToNumber.toString(2);
		return s;
	}
	
	private String Bin_To_Hex(String Number){
		BigInteger ToNumber=new BigInteger(Number,2);
		String s=ToNumber.toString(16);
		s=s.toUpperCase();
		return s;
	}
	
	private String Bin_To_Oct(String Number){
		BigInteger ToNumber=new BigInteger(Number,2);
		String s=ToNumber.toString(8);
		return s;
	}
	
	private String Bin_To_Dec(String Number){
		BigInteger ToNumber=new BigInteger(Number,2);
		String s=ToNumber.toString(10);
		return s;
	}
}
