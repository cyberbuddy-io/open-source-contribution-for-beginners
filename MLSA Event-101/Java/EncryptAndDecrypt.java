public class EncryptAndDecrypt {
    public static void main(String[] args) {
        //encrypt grade
        char grade ='A';
        grade=(char)(grade+8);
        System.out.println(grade);
        //decrypt grade
        grade=(char)(grade-8);
        System.out.println(grade);
    }
}
