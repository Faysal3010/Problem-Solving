public static void main(String[] args) {
		sayHi();
		
		int sum = getSUM(10,12);
		System.out.println(sum);
		
	}
		
		static int getSUM (int x, int y) {
			
			int sum =x+y;
			return sum;
		}
		
		static void sayHi() {
			System.out.println("Hi");
		}