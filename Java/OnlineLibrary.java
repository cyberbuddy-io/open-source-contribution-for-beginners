import java.util.*;

import static java.lang.System.exit;

class Library{
    String[]total,issue;
    String ibook;
    int n=100,c=0,cu=0;
    Scanner sc=new Scanner(System.in);

    //entering the books name
    public void input(){
        total=new String[n];
        issue=new String[n];
        System.out.println();
        System.out.println("Enter the name of the books without spaces:->");
        total[c]=sc.next();
        c++;
    }
    //displaying all the books
    public void display() {
        if (!Objects.equals(this.total, null)) {
            System.out.println("Available books are:->");
            for (int i = 0; i < n; i++) {
                if (!Objects.equals(this.total[i], null)) {
                    System.out.print(total[i] + "  ");
                }
                else{
                    i++;
                }
            }
            System.out.println();
        }
        else {
            System.out.println();
            System.out.println("No available books");
            System.out.println();
        }
    }
    //issuing book
    public void issueBook(){
        String temp;
        int j=0;
        System.out.print("Enter the name of the book you want: ");
        ibook=sc.next();
        for(int i=0;i<n;i++){
            if(Objects.equals(total[i], ibook)&& !Objects.equals(ibook, issue[i])){
                System.out.println("Issued successfully !!");
                temp=total[i];
                issue[j]=temp;
                ++j;
                break;
            }
            else{
                System.out.println("Not available !!");
                System.out.println();
            }
        }
    }
    //checking availability of the book
    public void check(){
        String cbook;
        System.out.print("Enter the  book you want to check for availability: ");
        cbook=sc.next();
            for(int j=0;j<n;j++){
                if(Objects.equals(cbook,issue[j])){
                    System.out.println("Not available !!");
                    break;
                }
                else {
                    cu++;
                }
                if(cu==n-1){
                    System.out.println("Available !!");
            }
        }
    }
    public void returnBook(){
        String rbook;
        System.out.print("Enter the book which you want to return: ");
        rbook=sc.next();
        for(int i=0;i<n;i++){
            if(Objects.equals(rbook,issue[i])){
                System.out.println("Successfully returned!!");
                System.out.println();
                issue[i]="No Books Issued";
                break;
            }
        }
    }
    //displaying books which are already issued
    public void displayIssue(){
        if(Objects.equals(this.issue,null)){
            System.out.println();
            System.out.println("No issued books.");
            System.out.println();
        }
        else {
            System.out.println("Issued books are:->");
            for (int i = 0; i < n; i++) {
                if(!Objects.equals(this.issue[i],null)) {
                    System.out.print(issue[i] + "  ");
                }
                else
                {
                    i++;
                }

            }
            System.out.println();
        }
    }


}
public class OnlineLibrary {
    public static void main(String[] args) {
        Library l = new Library();
        do {
//            Scanner s=new Scanner(System.in);
            int i;
            try{
            System.out.println("\nEnter your choice:->\n1.Input Books\n2.Check book availability\n3.Return Book\n4.Issue Book\n5.Display issued books\n6.Display all books\n7.Quit\n");
            i=l.sc.nextInt();
                switch (i) {
                    case 1 -> l.input();
                    case 2 -> l.check();
                    case 3 -> l.returnBook();
                    case 4 -> l.issueBook();
                    case 5 -> l.displayIssue();
                    case 6 -> l.display();
                    case 7 -> exit(0);
                    default -> {
                        System.out.println("Invalid choice !! enter again ");
                        return;
                    }
                }

            }
            catch (Exception  e){
                e.printStackTrace();
                break;
            }
        }
        while (true);
    }
}
