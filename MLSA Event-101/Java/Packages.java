//import java.util.*;\

public class Packages {
    public static void main(String[] args) {
//        if you are importing scanner class
//        Scanner sc=new Scanner(System.in);

//        sc.close();
//        if not importing
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.println("Welcome to Scanner");
        sc.close();
    }
    //we can create package by command javac -d . filename.java
    //packages are basically folders
}
