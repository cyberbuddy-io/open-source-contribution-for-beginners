// Ethan-Nowa

// Fibonacci Sequence:
// A series of numbers in which each number is the sum of the two preceding numbers.

public class Fibonacci {
	// Fibonacci Sequence method, uses iteration
	public static long fibonacci(long n) {
		 if (n < 2) {
			 return n;
		 }
		 long answer = 0;
		 long prev1 = 0;
		 long prev2 = 1;
		 for (n--; n > 0; n--) {
			 answer = prev1 + prev2;
			 prev1 = prev2;
			 prev2 = answer;
		 }
		 return answer;
	}
	
	// Main method, displays the first eleven numbers in the Fibonacci Sequence
	public static void main(String[] args) {
		System.out.println(fibonacci(0)); // Output: 0
		System.out.println(fibonacci(1)); // Output: 1
		System.out.println(fibonacci(2)); // Output: 1
		System.out.println(fibonacci(3)); // Output: 2
		System.out.println(fibonacci(4)); // Output: 3
		System.out.println(fibonacci(5)); // Output: 5
		System.out.println(fibonacci(6)); // Output: 8
		System.out.println(fibonacci(7)); // Output: 13
		System.out.println(fibonacci(8)); // Output: 21
		System.out.println(fibonacci(9)); // Output: 34
		System.out.println(fibonacci(10)); // Output: 55
	}
}
