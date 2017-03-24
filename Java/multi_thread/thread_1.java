class thread_1 extends Thread{
	public void fun(){
		for(int i  = 0 ;i<30;i++){
			System.out.println("thread_1");
		}
	}
	public void run(){
		System.out.print("Thread 1 begins\n") ;
		fun();
		System.out.print("Thread 1 ends\n") ;
	}
}