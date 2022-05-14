/**This is a good class  */
/**  @author sukhmeet(sukhmeet singh)*/
/**  @version 0.1*/
/**  @since 2002*/
/**  @see <a href="https://docs.oracle.com/javase/8/docs/api/" target="_blank">Java Docs</a>*/
/**  This class is to demonstrate what java doc is*/
/** This is <i>Italic</i>.<p>This is new Paragraph</p>*/
public class MethodTagsInJavaDoc {
    /**@param a THis is first parameter */
    /**@param b THis is second parameter */
    /**@return sum of two numbers */
    /**@throws Exception if a = 0 */
    /**@deprecated This message is deprecated please use + operator */
    public static int add(int a,int b) throws Exception{
        if(a==0){
            throw new Exception();
        }
        System.out.println("The sum is "+(a+b));
        return a+b;
    }
    /** @param args THese are the arguements given to the command line*/
    public static void main(String[] args) {
        System.out.println("This is my main method");
    }
}
