import java.math.BigInteger;

public class Calculate {
	private BigInteger A,B,Sum;
	private String AB;
    public String calculate(String Type,String Operator,String A,String B ){
    	if(Type=="Binary")ToBinary(A,B,Operator);
    	else if(Type=="Decimal")ToDec(A,B,Operator);
    	else if(Type==" Octal") ToOctal(A, B,Operator);
    	else if(Type=="Hexadecimal") ToHex(A, B,Operator);
		return AB;
	  }
    
    private void ToBinary(String A,String B,String C){
    	this.A=new BigInteger(A,2);
    	this.B=new BigInteger(B,2);
    	Done(C);
    	AB=Sum.toString(2);
    }
    private void ToOctal(String A,String B,String C){
    	this.A=new BigInteger(A,8);
    	this.B=new BigInteger(B,8);
    	Done(C);
    	AB=Sum.toString(8);
    }
    
    private void ToHex(String A,String B,String C){
    	this.A=new BigInteger(A,16);
    	this.B=new BigInteger(B,16);
    	Done(C);
    	AB=Sum.toString(16);
    }
    
    private void ToDec(String A,String B,String C){
    	this.A=new BigInteger(A,10);
    	this.B=new BigInteger(B,10);
    	Done(C);
    	AB=Sum.toString(10);
    }
    
    private void Done(String A){
    	if(A=="   +") Sum=this.A.add(B);
    	else if(A=="   -") Sum=this.A.subtract(B);
    	else if(A=="   *") Sum=this.A.multiply(B);
    	else if(A=="   /") Sum=this.A.divide(B);
    }
}
