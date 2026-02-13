	public static void main(String[] args) {

		String s1 = "Dhaka";
		String s2 = "Bangladesh";
//String s3 =s1.toUppweCase();
//int s4 =s2.length(); 
//syso(s3+" "+s4);
		System.out.println(s1.toUpperCase() + ". " + s2.length() + " " + s2.charAt(3));
		if (s1.equals(s2))
		//s1==s2
		{
			System.out.println("That two string is equal");
		} else {
			System.out.println("Not equal");
		}

	}