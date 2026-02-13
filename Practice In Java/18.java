	public static void main(String[] args) {

		int a[][] = { { 12, 56, 65, 89 ,88}, { 55, 54, 55, 90 ,56}, { 12, 56, 65, 89 ,100} };
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				System.out.println(a[i][j]);
			}
		}
	}

/* column     ⬇0  ⬇1  ⬇2  ⬇3  ⬇4
row 0 ➡  { { 12, 56, 65, 89 ,88   },
row 1 ➡  {   55, 54, 55, 90 ,56   }, 
row 2 ➡  {   12, 56, 65, 89 ,100} }
*/