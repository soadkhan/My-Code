import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;

import javax.swing.JOptionPane;

/*
 * Here We handle file.
 */

public class FileIO {
	
	private String Path="C:\\NewConvert";
	String F_Cb,F_Tb,T_Tb,T_Cb;
	private BufferedReader br;
	
	FileIO(){
		try{
			File file=new File(Path);
			if(!file.exists())
				file.mkdirs();
			
			String NewFile=Path.concat("\\Forward.Text");
			file = new File(NewFile);
			if(!file.createNewFile())
				ClearFile("\\Forward.Text");
			
			NewFile=Path.concat("\\Backward.Text");
			file = new File(NewFile);
			if(!file.createNewFile())
				ClearFile("\\Backward.Text");
			
			NewFile=Path.concat("\\Temp.Text");
			file = new File(NewFile);
			if(!file.createNewFile())
				ClearFile("\\Temp.Text");
			
			}catch(Exception e){
				JOptionPane.showMessageDialog(null,"SystemError!!!");
			}
	}
	
	private void ClearFile(String FileName){
		try{
		FileName=Path.concat(FileName);
		PrintWriter writer = new PrintWriter(FileName);
		writer.print("");
		writer.close();
		}catch(Exception e){
			JOptionPane.showMessageDialog(null,"SystemError!!!");
		}
		
	}
	
	void File_Write(String FCB,String FTB,String TCB,String TTB,String FileName){
		try{
			File file= new File(Path.concat(FileName));
			FileWriter fileWritter = new FileWriter(file,true);
	        BufferedWriter bufferWritter = new BufferedWriter(fileWritter);
	        PrintWriter Write=new PrintWriter(bufferWritter); 
	        Write.println(FCB);
	        Write.println(FTB);
	        Write.println(TCB);
	        Write.println(TTB);
	        Write.close();
		}catch(Exception e){
			JOptionPane.showMessageDialog(null,"SystemError!!!");
		}
	}
	
	void File_Read(String FileName){
		String Tm;
		ClearFile("\\Temp.Text");
		Tm=Path.concat(FileName);
		File file=new File(Tm);
		try{
			br = new BufferedReader(new FileReader(file));
			F_Cb = br.readLine();
			F_Tb = br.readLine();
			T_Cb = br.readLine();
			T_Tb = br.readLine();
			while ((Tm = br.readLine()) != null) {
				 File_Write(F_Cb, F_Tb, T_Cb, T_Tb, "\\Temp.Text");
				 F_Cb=Tm;
				 F_Tb = br.readLine();
				 T_Cb = br.readLine();
				 T_Tb = br.readLine();
			}
			br.close();
			ClearFile(FileName);
			File_Cpy(FileName);
		}catch(Exception e){
			JOptionPane.showMessageDialog(null,"SystemError!!!");
		}
		
	}
	
	private void File_Cpy(String FileName){
		try{
		String Tm=Path.concat("\\Temp.Text");
		File file=new File(Tm);
		br=new BufferedReader(new FileReader(file));
		while ((Tm = br.readLine()) != null) {
			 File_Write(Tm, br.readLine(), br.readLine(), br.readLine(), FileName);
		}
		br.close();
		}catch(Exception e){
			JOptionPane.showMessageDialog(null,"SystemError!!!");
		}
	}
	
}
