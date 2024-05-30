# Get Equal Substring Within Budget

## Description

This Java program calculates the maximum length of a substring of `s` that can be changed to match the corresponding substring of `t` with a total cost less than or equal to `maxCost`. The cost of changing each character is given by the absolute difference between the ASCII values of the characters in `s` and `t`.

## How It Works

The program uses a sliding window approach to find the maximum length of a valid substring. It maintains a window defined by two pointers, `start` and `end`, and adjusts this window to ensure that the total cost of changes within the window does not exceed `maxCost`.

1. **Initialize Variables**:
    - `n` for the length of the strings.
    - `start` to track the beginning of the current window.
    - `currentCost` to accumulate the cost of changes.
    - `maxLength` to keep track of the maximum length of valid substrings.

2. **Expand the Window**:
    - Iterate through the string `s` using `end` pointer.
    - Add the cost of changing the current character from `s` to `t` to `currentCost`.

3. **Shrink the Window**:
    - If `currentCost` exceeds `maxCost`, move the `start` pointer to the right and subtract the corresponding costs from `currentCost` until `currentCost` is within the allowed limit.

4. **Update Maximum Length**:
    - Whenever `currentCost` is within `maxCost`, update `maxLength` with the current window size (`end - start + 1`).

## Usage

1. **Compile the Program**:
   ```bash
   javac Get_Equal_Substring_Within_Budget.java
2:Run the Program:
java Get_Equal_Substring_Within_Budget

3:
Input:

The program will prompt you to enter the first string (s).
Next, enter the second string (t).
Finally, enter the maximum cost (maxCost).

Example

Input

Enter the first string: abcd
Enter the second string: bcdf
Enter the maximum cost: 3

Output

Explanation
For s = "abcd" and t = "bcdf" with maxCost = 3:

Changing the substring "abc" of s to "bcd" of t costs |b-a| + |c-b| + |d-c| = 1 + 1 + 1 = 3.
This is within the allowed cost, and the length of this substring is 3.
No longer substring can be changed within the given cost, so the output is 3.

Code:

      import java.util.Scanner;
      public class Get_Equal_Substring_Within_Budget {
      public int equalSubstring(String s, String t, int maxCost) {
      int n = s.length();
      int start = 0;
      int currentCost = 0;
      int maxLength = 0;

        for (int end = 0; end < n; ++end) {
            currentCost += Math.abs(s.charAt(end) - t.charAt(end));

            while (currentCost > maxCost) {
                currentCost -= Math.abs(s.charAt(start) - t.charAt(start));
                ++start;
            }

            maxLength = Math.max(maxLength, end - start + 1);
        }

        return maxLength;
    }

    public static void main(String[] args) {
        Get_Equal_Substring_Within_Budget obj = new Get_Equal_Substring_Within_Budget();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first string:");
        String FirstString1 = sc.nextLine();
        System.out.println("Enter the second string:");
        String SecondString2 = sc.nextLine();
        System.out.println("Enter the maximum cost:");
        int maxcost = sc.nextInt();
        System.out.print("'" + FirstString1 + "'" + " " + "'" + SecondString2 + "'" + " " + maxcost);
        System.out.println("\nThe answer is:");
        System.out.println(obj.equalSubstring(FirstString1, SecondString2, maxcost));
    }
}






This `README.md` provides a comprehensive guide to understanding and using your program. It includes a description, detailed usage instructions, and an example to illustrate how the program works.
