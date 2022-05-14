public class MethodOverloading {
    // static void change(int x){// the arguement we give in a method is a copy and we cannot change the original value of the arguement only the copy of it
    //     x=98;
    // }



    // static void change2(int [] arr){
    //     arr[0]=98;
    // } 




    // static void tellJoke(){
    //     System.out.println("I invented a new world !!");
    // }


    //method overriding
    //same name methods with different arguements
    static void add(int a,int b){
        int s=a+b;
        System.out.println(s);
    }
    static void add (float a,float b){
        float sum=a+b;
        System.out.println(sum);
    }
    public static void main(String[] args) {
        // tellJoke();
        
        
        // changing an integer
        // int x=56;
        // change(x);
        // System.out.println(x);
        
        //changing an array
        // int []a={34,56,22,567,43}; // here "a" stored the address of the array object so it will change array cause reference is sent to method
        // change2(a);
        // System.out.println("The new value of array's zero index is "+a[0]);


        //method overriding
        add(3,5);//add(a,b) here a and b are arguements and 3 and 5 are perimeters they are interchangably used
        add(5, 6);
    }
}
