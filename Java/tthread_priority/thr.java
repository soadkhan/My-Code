class thr extends Thread{
	public String name ;
	public int num;
	thr(String go, int go2){
		name = go;
		num = go2;
	}
	public void run(){
		try{
			for(int i = 0;i<=num;i++){
				System.out.println("Running " + name);
				sleep(500);
			}
		}
		catch(Exception e){

		}
	}
}