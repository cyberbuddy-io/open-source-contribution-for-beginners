// import java.util.Scanner;
public class StringMethods {
    public static void main(String[] args) {
        // Scanner s=new Scanner(System.in);
        //String is a sequence of characters
        String a="HARRY";
        int value=a.length();//checks length of the string
        String nonTrim="     Simmu      ";
        // String a= new String("Harry");
        String la=a.toLowerCase();//changes string to lower case same goes for uppercase 
        System.out.println(a);
        System.out.println(value);
        System.out.println(la);
        // System.out.println(nonTrim);//trim the space of the string
        System.out.println(nonTrim.trim());
        System.out.println(a.substring(2));//print string from given index number
        System.out.println(a.substring(0,2));//print string from given starting index to ending index
        System.out.println(a.replace('R', 'P'));//replaces old character from string to new string
        System.out.println(a.replace("RRY","NDLE"));//replaces old string with new
        System.out.println(a.startsWith("HAR"));//checks if string starts with given characters or strings
        System.out.println(a.startsWith("HR"));
        System.out.println(a.endsWith("HR"));//opposite of startsWith function
        System.out.println(a.charAt(3));//checks the character at provided index
        System.out.println(a.indexOf("RY"));//checks the index of given string and character
        System.out.println(a.indexOf('R', 2));//checks the position of character or string from given index
        //returns -1 if didnot find character string or character string at given index
        System.out.println(a.lastIndexOf('R'));//gives the last index of given string or character
        System.out.println(a.lastIndexOf("R",4));//checks from given index
        System.out.println(a.equals("harry"));//checks if two strings are equals
        System.out.println(a.equalsIgnoreCase("harry"));//checks two strings ignoring if they are lower or upper case
        //escape sequence
        //must add them within quotes


        //   \n creates new line
        //   \" addes double quotes
        //   \\ addes single backspace
        //   \t addes tab space(== 4spaces)    
        //   \b insert a backspace
        //   \f insert formfeed
        //   \' addes single quote
    }
}
