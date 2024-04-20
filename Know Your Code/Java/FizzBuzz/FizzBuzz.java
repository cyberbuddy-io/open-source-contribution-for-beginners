// Ethan-Nowa

// FizzBuzz:
// Replaces any number divisible by three with "fizz", and any number divisible by five with "buzz", and any number divisible by both with "fizzbuzz".

public class FizzBuzz {
	// FizzBuzz method
	public static void fizzbuzz(int num) {
		for (int i = 1; i <= num; i++) {
			if (i % 15 == 0) {
				System.out.println("FizzBuzz");
			} else if (i % 3 == 0) {
				System.out.println("Fizz");
			} else if (i % 5 == 0) {
				System.out.println("Buzz");
			} else {
				System.out.println(i);
			}
		}
	}
	
	// Main method, displays the FizzBuzz answers up to 100
	public static void main(String[] args) {
		fizzbuzz(100);
	}
}
