/*
 * This class Check the numbers is in actual format or not.
 * Mainly here we check 4 type numbers validity.
 * Here Only check is accessible from outside
 * This function is boolean type.
 */
public class CheckNumber {
	
	boolean Check(String Select,String Number){
		if(Select.equals("")||Number.equals("")) return false;
		if(Select.equals("Binary") && CheckBinary(Number)) return false; 
		if(Select.equals("Decimal") && CheckDecimal(Number)) return false; 
		if(Select.equals("Octal") && CheckOctal(Number)) return false; 
		if(Select.equals("Hexadecimal") && CheckHexadecimal(Number)) return false; 
		return true;
	}
	
	private boolean CheckBinary(String Number){
		int len=Number.length();
		for(int i=0;i<len;i++)
			if(Number.charAt(i)!='1'&&Number.charAt(i)!='0') return true;
		return false;
	}
	
	private boolean CheckDecimal(String Number){
		int len=Number.length();
		for(int i=0;i<len;i++)
			if(Number.charAt(i)!='0'&&Number.charAt(i)!='1'&&Number.charAt(i)!='2'&&Number.charAt(i)!='3'
					&&Number.charAt(i)!='4'&&Number.charAt(i)!='5'&&Number.charAt(i)!='6'
					&&Number.charAt(i)!='7'&&Number.charAt(i)!='8'&&Number.charAt(i)!='9') return true;
		return false;
	}
	
	private boolean CheckHexadecimal(String Number){
		int len=Number.length();
		for(int i=0;i<len;i++)
			if(Number.charAt(i)!='0'&&Number.charAt(i)!='1'&&Number.charAt(i)!='2'&&Number.charAt(i)!='3'
					&&Number.charAt(i)!='4'&&Number.charAt(i)!='5'&&Number.charAt(i)!='6'
					&&Number.charAt(i)!='7'&&Number.charAt(i)!='8'&&Number.charAt(i)!='9'
					&&Number.charAt(i)!='A'&&Number.charAt(i)!='B'&&Number.charAt(i)!='C'
					&&Number.charAt(i)!='D'&&Number.charAt(i)!='E'&&Number.charAt(i)!='F') return true;
		return false;
	}
	
	private boolean CheckOctal(String Number){
		int len=Number.length();
		for(int i=0;i<len;i++)
			if(Number.charAt(i)!='0'&&Number.charAt(i)!='1'&&Number.charAt(i)!='2'&&Number.charAt(i)!='3'
					&&Number.charAt(i)!='4'&&Number.charAt(i)!='5'&&Number.charAt(i)!='6'
					&&Number.charAt(i)!='7') return true;
		return false;
	}
}
