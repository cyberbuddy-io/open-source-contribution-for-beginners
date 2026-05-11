import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Utility_Tools_Pack {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    public int intinput(String message) throws IOException,NumberFormatException{
        System.out.println(message);
        return(Integer.parseInt(in.readLine().trim()));
    }
    public String strinput(String message,boolean cantrim) throws IOException{
        System.out.println(message);
        return(cantrim ? in.readLine().trim():in.readLine());
    }
    public double decimalinput(String message)throws IOException,NumberFormatException{
        System.out.println(message);
        return(Double.parseDouble(in.readLine().trim()));
    }
    public int[] intinput(String message,int numberOfInput) throws IOException,NumberFormatException{
        System.out.println(message);
        int []a = new int[numberOfInput];
        for (int i = 0; i < numberOfInput; i++) {
            a[i]=Integer.parseInt(in.readLine().trim());
        }
        return(a);
    }
    public String[] strinput(String message,boolean cantrim,int numberOfInput) throws IOException{
        System.out.println(message);
        String []a = new String[numberOfInput];
        for (int i = 0; i < numberOfInput; i++) {
            a[i]= (cantrim ? in.readLine().trim():in.readLine());
        }
        return(a);
    }
    public double[] decimalinput(String message,int numberOfInput)throws IOException,NumberFormatException{
        System.out.println(message);
        double []a = new double[numberOfInput];
        for (int i = 0; i < numberOfInput; i++) {
            a[i]=Double.parseDouble(in.readLine().trim());
        }
        return(a);
    }
}

