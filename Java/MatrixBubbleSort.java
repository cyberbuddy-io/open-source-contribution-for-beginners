import java.util.Scanner;

public class Matsort 
{
    int A[][],m,n,i,j;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter rows and columns");
        m=sc.nextInt();
        n=sc.nextInt();
        A=new int[m][n];
        if(m<3||m>7)
        {
            System.out.println("invalid rows");
            System.exit(0);
        }
        else if(n<3||n>7)
        {
            System.out.println("invalid columns");
            System.exit(0);
        }
        System.out.println("enter elements"+(m*n));
        for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
             A[i][j]=sc.nextInt();
        }        
    }
    void display()
    {
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
            System.out.print(A[i][j]+" ");
         System.out.println();
     }
    }
    void sum()
    {
        int sum=0;
        for(i=0;i<m;i++)
        {
           for(j=0;j<n;j++)
           {
               if(i==0||j==0||i==(m-1)||j==(n-1))
               {
                   sum=sum+A[i][j];
               }
           }
        }
        System.out.println(" "+sum);
    }
    void sort()
    {
        int arr[]=new int[60];
        int k=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                arr[k++]=A[i][j];
            }
        }
        for(i=0;i<k;i++)
        {
            for(j=0;j<k-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    int t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        int x=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                A[i][j]=arr[x++];
            }
        }
    }
    public static void main(String args[])
    {
        Matsort ob=new Matsort();
        ob.input();
        System.out.println("ORIGINAL MATRIX");
        ob.display();
        System.out.print("sum of border of unsorted matrix");
        ob.sum();
        System.out.println("SORTED MATRIX");
        ob.sort();
        ob.display();
        System.out.print("sum of border of sorted matrix");
        ob.sum();
    }
}