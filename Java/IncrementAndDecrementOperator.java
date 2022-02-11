public class IncrementAndDecrementOperator {
    public static void main(String[] args) {
        int a=654+6;
        System.out.println(a);
        a++;//or ++a increase number by one first a is incremented then a is used
        //a++ first a is used then incremented
        System.out.println(a);
        a--;//or --a decrement by one first a is decremented then a is used
        //a-- first a is used then a is decremented
        System.out.println(a);
        System.out.println(++a+9);//first value of a is incremented then added to 9
        char c='c';
        System.out.println(++c);

    }
}
