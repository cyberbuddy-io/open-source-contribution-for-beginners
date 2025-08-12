public class SwitchStatement {
    public static void main(String[] args) {
        int a=5;
        // switch(a){
        //     case 5:{
        //         System.out.println("Welcome!!");
        //         break; //break statement breaks the switch statement after the execution of statement after the condition is met not adding break statement will execute all the statements irrespective of the condition
        //     }
        //     case 6:{
        //         System.out.println("Not Welcome!!");
        //         break;
        //     }
        // }

        //another syntax for swtich statement
        //run only in java 14 and onwards

        switch(a){
            case 5 -> System.out.println("Welcome!!");
            case 6-> System.out.println("Not Welcome!!");
        }
    }
}
