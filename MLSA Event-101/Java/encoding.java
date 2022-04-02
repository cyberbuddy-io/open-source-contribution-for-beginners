public class String4 
{
    String str;
    int len;
    String result="";
   void input()
   {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter string");
       str=sc.nextLine();
       len=str.length();
   }
   void encrypt()
   {
       int n=2;
       char ch;
       for(int i=0;i<len;i++)
       {
           ch=str.charAt(i);
           if(Character.isLetter(ch))
           {
               if(Character.isLetter(ch+n))
                   ch=(char)(ch+n);
               else
                   ch=(char)(ch-26+n);
           }
           result=result+ch;
       }
       System.out.println(result);
   }
   void display()
   {
       System.out.println("Original sentence"+str);
       System.out.println("Encrypted sentence"+result);
   }
   public static void main(String args[])
   {
       String4 obj=new String4();
       obj.input();
       obj.encrypt();
       obj.display();
   }
}