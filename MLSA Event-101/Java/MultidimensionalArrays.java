public class MultidimensionalArrays {
    public static void main(String[] args) {
        int [][] flats=new int[2][3];//first bracket for rows and second for columns
        flats[0][0]=101;
        flats[0][1]=102;
        flats[0][2]=103;
        flats[1][0]=104;
        flats[1][1]=105;
        flats[1][2]=106;
        for(int i=0;i<2;i++){//first loop for rows
            for(int j=0;j<3;j++){//second loop for columns
                System.out.print(flats[i][j]+"  ");
            }
            System.out.println(" ");
            System.out.println(" ");
        }
    }
}
