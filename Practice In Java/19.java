//Write a for loop which print summation of all the numbers which are divided by 3 and 5 between 30 to 120.

	public static void main(String[] args) 
{
		int x=0;
		 System.out.println("Divided by 3 and 5 between 30 to 120");

	for(int i=30;i<=120;i++) 
	{
		if(i%3==0 && i%5==0){
		System.out.print("  "+i);
		x=i+x;
		
		}
    }
	System.out.println("\nsummation of all the numbers: "+ x);
}


 