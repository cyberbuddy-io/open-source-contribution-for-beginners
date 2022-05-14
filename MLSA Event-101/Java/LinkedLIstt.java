import java.util.*;
public class LinkedLIstt {
    public static void main(String[] args) {
        System.out.println("Welcome to LinkedList tutorial !!");
        LinkedList<Integer> li=new LinkedList<>();
        // linked last has same methods except addLast and addFirst
        li.add(5);
        li.add(13);
        li.add(15);
        li.add(133);
        li.addLast(0);
        li.addFirst(00);
        for(int i=0;i<6;i++){
            System.out.println(li.get(i));
        }
    }
}
