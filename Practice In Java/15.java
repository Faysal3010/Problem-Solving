public static void main(String[] args) {

		String s = "I                       love BD";
		String[] a = s.split("\\s+");
		for (int i = 0; i < a.length; i++) {
			System.out.println(a[i]);
		}

	}