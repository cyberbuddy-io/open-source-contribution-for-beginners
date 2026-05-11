import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

public class menu {
    private final Utility_Tools_Pack u = new Utility_Tools_Pack();
    public void open_account() throws IOException {
        Account acc;
        String willing;
        do{
            String type = u.strinput("Type of account:",true);

            System.out.println("Should Continue");
            willing=u.strinput("Yes/No",true);
        }while(!willing.equalsIgnoreCase("yes"));
    }
    public void perform_operations(){}
    public void close_account(){}
    public void save_and_quit(){}
    public void main_menu() throws IOException {
        System.out.println("Enter :");
        System.out.println("1:add_acc");
        System.out.println("2:perf_ops");
        System.out.println("3:cls_acc");
        System.out.println("4:exit");
        int c=u.intinput("Enter");
        switch(c){
            case 1 -> open_account();
            case 2 -> perform_operations();
            case 3 -> close_account();
            case 4 -> save_and_quit();
            default -> System.out.println("Please Follow Instructions");
        }
    }
}
