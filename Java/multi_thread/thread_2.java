class thread_2 extends Thread{
	public void fun(){
		for(int i  = 0 ;i<30;i++){
			System.out.println("thread_2");
		}
	}
	public void run(){
		System.out.print("Thread 2 begins\n") ;
		fun();
		System.out.print("Thread 2 ends\n") ;
	}
}