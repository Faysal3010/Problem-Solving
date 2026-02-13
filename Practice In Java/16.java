package cat;
import java.util.*;
public class dog {
//Suppose you are planning to make a simple calculator. Your calculator has four function- add(),subtract(),multiply and divide(). Each of these functions takes two floating point numbers as input and returns the result after applying the corresponding operation. Scan different values from the user and test these four functions with these input. 
	
	public static void main(String[] args) {
		
		System.out.print("Enter: ");
		Scanner sc= new Scanner(System.in);
		int x=sc.nextInt();
		int y=sc.nextInt();
		sc.close();
		
		int a=add(x,y);
		int b=subtract(x,y);
		int c=multiply(x,y);
		int d=divide(x,y);
		System.out.println("add: "+a);
		System.out.println("subtract: "+b);
		System.out.println("multiply: "+c);
		System.out.println("divide: "+d);
	}
		static int add(int x, int y) {
			int sum=x+y;
			return sum;
		}
		static int subtract(int x, int y) {
			int sum=x-y;
			return sum;
		}
		static int multiply(int x, int y) {
			int sum=x*y;
			return sum;
		}
		static int divide(int x, int y) {
			int sum=x/y;
			return sum;
		}
}