import java.util.*;
class ArrayListt{
    public static void main(String[] args) {
        System.out.println("Welcome to array list tutorial !!");
        ArrayList<Integer> li=new ArrayList<>();
        li.add(5);
        li.add(6);
        li.add(7);
        li.add(8);//adding in arraylist
        li.add(0,8);
        li.add(1,8);// add 8 on index 1
        ArrayList<Integer> l2=new ArrayList<>(3);
        l2.add(13);
        l2.add(17);
        // li.addAll(l2);// adding all the elements of l2 in li at the end
        li.addAll(0,l2);// adding all the elements of l2 in li from index 0
        // li.clear();// clears the arraylist
        // for(int i=0;i<li.size();i++){
        //     System.out.println(li.get(i));
        // }
        System.out.println(li.contains(13)); //checks the particular element present in the given ararylist
        System.out.println(li.indexOf(13)); //checks the index of given value
        System.out.println(li.set(0,555));
        System.out.println(li.get(0));
    }
}