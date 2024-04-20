// Ethan-Nowa

// Anagram:
// A word, phrase, or name formed by rearranging the letters of another.

import java.util.Arrays;

public class Anagram {
	// isAnagram method, tests if the two input strings are anagrams of each other by sorting and using java.util.Arrays
	public static boolean isAnagram(String text1, String text2) {
		char[] sortedText1 = text1.toCharArray();
		char[] sortedText2 = text2.toCharArray();
		Arrays.sort(sortedText1);
		Arrays.sort(sortedText2);
		return Arrays.equals(sortedText1, sortedText2);
	}
	
	// Main method, tests true and false examples
	public static void main(String[] args) {
		System.out.println(isAnagram("friend", "finder")); // Output: True
		System.out.println(isAnagram("potato", "tomato")); // Output: False
	}
}
