public static void main(String[] args) {

		int a[] = new int[3];
		a[0] = 10;
		a[1] = 20;
		a[2] = 30;
		System.out.println("10+30="+ (a[0]+a[2]));

		int b[] = new int[4];
		b[0] = 11;
		System.out.println("Find only a[0]="+(a[0] + b[3]));
		b[0] = 22;
		b[2] = 33;
		b[3] = 44;
		System.out.println("10+44=" + (a[0] + b[3]));
		System.out.println("b[4]=" + b.length + "\n" + "b[4]=" + a.length);

	}