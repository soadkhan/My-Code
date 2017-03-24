class multi_thread{
	public static void main(String[] args) {
		thread_1 th1 = new thread_1();
		thread_2 th2 = new thread_2();

		th1.start();
		th2.start();	

	}
}