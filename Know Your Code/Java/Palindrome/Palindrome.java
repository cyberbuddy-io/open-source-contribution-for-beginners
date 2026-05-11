// Ethan-Nowa

// Palindrome:
// A word, phrase, or sequence that reads the same backward as forward.

public class Palindrome {
	// isPalindrome method, tests if the input string is a palindrome and returns true or false
	public static boolean isPalindrome(String text) {
		int len = text.length();
		char[] charArray = text.toCharArray(); // converts text into a character array, counts spaces
		for (int i = 0; i < len / 2; i++) {
			if (charArray[i] != charArray[len - 1 - i]) {
				return false;
			}
		}
		return true;
	}
	
	// Main method, tests true and false examples
	public static void main(String[] args) {
		System.out.println(isPalindrome("racecar")); // Output: True
		System.out.println(isPalindrome("racecars")); // Output: False
	}
}
