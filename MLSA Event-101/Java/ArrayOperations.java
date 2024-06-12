import java.util.Arrays;
class ArrayOperations{
	public static void main(String[] args){
		int[] intArray = new int[4];
		//this is an int array with length 4
		intArray[0] = 1;
		intArray[1] = 2;
		intArray[2] = 3;
		intArray[3] = 4;
		//getting the first and the last vale in the array

		//first value
		System.out.println(intArray[0]);

		//last value
		System.out.println(intArray[intArray.length-1]);

		System.out.println("************");

		//printing the array values using loops

		//for loop
		for(int x : intArray){
			System.out.println(x);
		}
		System.out.println("************");

		//while loop
		int y = 0;
		while(y<intArray.length){
			System.out.println(intArray[y]);
			y++;

		}
		System.out.println("************");

		//comparing two arrays

		int[] intArray2 = {1,5,3,2};

		//using Arrays class
		//import java.util.Arrays;

		//Sorting the array using sort()

		Arrays.sort(intArray2);

		for(int x : intArray2){
			System.out.println(x);
		}
		System.out.println("************");

		//printing array 
		System.out.println(intArray2);
		//since it gives the refference of the array 

		//using toString() method
		System.out.println(Arrays.toString(intArray2));

		//comparing Arrays using equals()
		System.out.println(Arrays.equals(intArray2,intArray));

	}
}