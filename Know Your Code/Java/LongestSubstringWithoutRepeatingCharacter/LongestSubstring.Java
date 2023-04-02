import java.util.HashMap;
import java.util.Map;
public class LongestSubstring {

    public static void main (String args[]) {
        String s = "abcabcd";
        longestSubstring(s);
    }

    public static void longestSubstring(String inputString) {

        //create map to store visited character.
        Map<Character, Integer> visitedCharacter = new HashMap<>();

        //assign left pointer and max variable to store the max length of substring.
        int left=0, max = 0 ;

        //move right pointer till end of string if repeted character found.
        //checking if map contains current character and it is greater than move left pointer to next to current character

        for (int right = 0 ; right < inputString.length(); right++) {

            char currentCharacter = inputString.charAt(right);

            if (visitedCharacter.containsKey(currentCharacter) && visitedCharacter.get(currentCharacter) >= left)
            {
                left  = visitedCharacter.get(currentCharacter) + 1 ;
            }

            max = Math.max(max, right - left + 1);

            visitedCharacter.put(currentCharacter, right);

        }
        System.out.println( "length of longest Substring without repeating character for input string " + inputString
                +  " is " + max);
    }
}