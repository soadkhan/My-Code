class main_fun{
	public static void main(String[] args) {
		thr one = new thr("**one**", 10);
		thr two = new thr("two",10) ;
		thr three = new thr("three",10) ;
		one.setPriority(1);
		two.setPriority(10);
		three.setPriority(10);
		one.start();
		two.start();
		three.start();
	}
}