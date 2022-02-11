public class Arrays {
    public static void main(String[] args) {
        int [] arr=new int[2];
        //we can create arrays in three ways
        //1. declaration and memory allocation--> int [] arr=new int[5];
        //2. declaration and then memory allocation--> int [] arr; and then next line arr=new int[5];
        //3.declaration memory allocation and initialization together-->int [] arr={98,45,79};



        //intitialization
        arr[0]=5;
        arr[1]=9;
        System.out.print(arr[1]);
        // System.out.print(arr[3]);//it will throw error as we have given array the size of 2 only
    }
}
