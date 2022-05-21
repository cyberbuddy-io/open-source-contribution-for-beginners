import java.util.Scanner;

public class CelciusToFahrenheit {
    static void convert(float c){
        float f=(c*1.8f)+32;//reverse is c=(f-32)*1.8
        System.out.println("Temperature in fahreheit is : "+f);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float c;
        System.out.print("Enter temperature in celcius ");
        c=sc.nextFloat();
        convert(c);
        sc.close();
    }
}
