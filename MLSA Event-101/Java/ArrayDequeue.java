import java.util.*;
public class ArrayDequeue {
    public static void main(String[] args) {
        ArrayDeque<Integer> a=new ArrayDeque<>();
        a.add(5);
        a.add(6);
        a.add(7);
        System.out.println(a);
        // a.remove();
        // System.out.println(a);
        // almost all the methods of linkedlist
        System.out.println(a.isEmpty());
        a.remove(6);
        System.out.println(a);
        System.out.println(a.getLast());

    }
}
