public class Average {
    int sum(int i,int j,int k){
        return (i+j+k)/3;
    }
    public static void main(String[] args) {
      Average obj=new Average();
      System.out.println(obj.sum(5, 6, 4));  
    }
}
