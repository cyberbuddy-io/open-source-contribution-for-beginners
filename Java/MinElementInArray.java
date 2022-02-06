public class MinElementInArray {
    public static void main(String[] args) {
        int []a={34,65,43,64,99};
        int b=a[0];
        for(int i=0;i<a.length;i++){
            if(b>a[i]){
                b=a[i];
            }
        }
        System.out.println(b);
    }
}
