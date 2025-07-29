
import java.util.Scanner;
public class matrix_symmetric 
{
 int A[][],B[][],n,i,j;
 void input()
 {
     Scanner sc=new Scanner(System.in);
     System.out.println("enter no. of rows and columns");
     n=sc.nextInt();
     A=new int[n][n];
     B=new int[n][n];
     System.out.println("enter elements"+(n*n));
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
             A[i][j]=sc.nextInt();
     }
 }
 void display()
 {
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
            System.out.print(A[i][j]);
        System.out.println();
     }
 }
  void transpose()
 {
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             B[i][j]=A[j][i];
         }
     }
     //printing B
     System.out.println("transpose");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
             System.out.print(B[i][j]);
        System.out.println();
     }
 }
 void symmetric()
 {
     boolean flag=true;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(A[i][j]!=B[i][j])
                 flag=false;
         }
     }
     if(flag==true)
         System.out.println("Symmetric matrix");
     else
         System.out.println("not symmetric");
 }
 public static void main(String args[])
 {
     matrix_symmetric obj=new matrix_symmetric();
     obj.input();
     obj.display();
     obj.transpose();
     obj.symmetric();
 }
}