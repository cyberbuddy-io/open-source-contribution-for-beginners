
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
        System.out.println("\n enter the first string in this one :");
        String FirstString1 = sc.nextLine();
        System.out.println("\n enter the Second String in this one :");
        String SecondString2 = sc.nextLine();

        System.out.println("\n enter the maximum cost of the string");
        int maxcost = sc.nextInt();
        System.out.print("'" + FirstString1 + "'" + " " + "'" + SecondString2 + "'" + " " + maxcost);

        System.out.println("\n the answer is :");
        System.out.println(obj.equalSubstring(FirstString1,SecondString2,maxcost));


    }
}
