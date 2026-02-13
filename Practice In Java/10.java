//A loop inside another loop is called a nested loop
//একটা লুপ ভিতরে আর একটা লুপ থাকলে তাকে নেস্টেড লুপ বলে 

	public static void main(String[] args)        
	{

		int i,j;
		for(i=1;i<=3;i++) {   // 3 times round
			System.out.println("This is outer loop");
			for(j=1;j<=2;j++) { //2 times round
				System.out.println("This is inner loop");
			}
		}
	}

//output:
/*This is outer loop-------------- 1st times
This is inner loop--1st times
This is inner loop--2nd times
This is outer loop----------------2nd times
This is inner loop--1st times
This is inner loop--2nd times
This is outer loop----------------3rd times
This is inner loop--1st times
This is inner loop--2nd times
*/