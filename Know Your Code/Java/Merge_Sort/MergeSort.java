// Java implementation for sorting a list with the Merge Sort algorithm

public class MergeSort
{
	// Method that divides a list into a first and second half sublist
	// After each divide, method calls itself, passing on the newly divided sublist
	// After a branch has been divided into sublists of a single element each, they are recombined in sorted order by calling the 'merge' method
	// Works for both even and odd length lists
	public static void mergeSort(int[] list)
	{
		if (list.length > 1)
		{
			// Splits off the first half of the list
			int[] firstHalf = new int[list.length / 2];
			System.arraycopy(list, 0, firstHalf, 0, list.length / 2);
			mergeSort(firstHalf);

			// Splits off the second half of the list
			int secondHalfLength = list.length - list.length / 2;
			int[] secondHalf = new int[secondHalfLength];
			System.arraycopy(list, list.length / 2, secondHalf, 0, secondHalfLength);
			mergeSort(secondHalf);

			// calls the method that combines two sublists, resulting in a sorted list
			merge(firstHalf, secondHalf, list);
		}
	}

	// Method that combines two sublists, resulting in a sorted list
	// Sorting order is smallest to greatest
	public static void merge(int[] list1, int[] list2, int[] temp)
	{
		int listCounter1 = 0; // Counter used to keep track of the current number in the first list
		int listCounter2 = 0; // Counter used to keep track of the current number in the second list
		int listCounter3 = 0; // Counter used to keep track of the current number in the combined and sorted list

		// As long as neither sublist has reached its end
		while (listCounter1 < list1.length && listCounter2 < list2.length)
		{
			// If the smaller value is in sublist1, it is added to the sorted list next
			if (list1[listCounter1] < list2[listCounter2])
			{
				temp[listCounter3++] = list1[listCounter1++];
			}
			// If the smaller value is in sublist2, it is added to the sorted list next
			else
			{
				temp[listCounter3++] = list2[listCounter2++];
			}
		}

		// When all the values from sublist2 has been used, but sublist 1 still have unused values remaining
		while (listCounter1 < list1.length)
		{
			temp[listCounter3++] = list1[listCounter1++];
		}

		// When all the values from sublist1 has been used, but sublist 2 still have unused values remaining
		while (listCounter2 < list2.length)
		{
			temp[listCounter3++] = list2[listCounter2++];
		}
	}

	// Main method to run program
	public static void main(String[] args)
	{
		int[] list = {8, 1, 3, 6, -3, 9, 15, -9, 10};
		mergeSort(list);

		// Displays sorted list
		for (int i = 0; i < list.length; i++)
		{
			System.out.print(list[i] + " ");
		}
	}
}