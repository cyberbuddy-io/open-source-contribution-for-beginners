public class String5 
{
    String str;
    int len;
    String result;
    int n;
    void input()
   {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter string");
       str=sc.nextLine();
       len=str.length();
       System.out.println("Enter n");
       n=sc.nextInt();
       result="";
   }
    void decode()
    {
        //n=2;
        char ch;
        for(int i=0;i<len;i++)
       {
           ch=str.charAt(i);
           if(Character.isLetter(ch))
           {
               if(Character.isLetter(ch-n))
                   ch=(char)(ch-n);
               else
                   ch=(char)(ch+26-n);
           }
           result=result+ch;
       }
       System.out.println(result);
    }
     void display()
   {
       System.out.println("Original sentence"+str);
       System.out.println("Decoded sentence"+result);
   }
   public static void main(String args[])
   {
       String5 obj=new String5();
       obj.input();
       obj.decode();
       obj.display();
   }
}