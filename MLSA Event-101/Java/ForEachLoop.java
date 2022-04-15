public class ForEachLoop {
    public static void main(String[] args) {
        // int [] marks={98,66,56,44,33};
        // System.out.println(marks.length);
        // System.out.println(marks);
        float[]marks={23,45,64,2,4};
        // System.out.println(marks.length);
        // System.out.println(marks[2]);
        // String[]names={"sukhmeet","harmeet","kulwant"};
        // System.out.println(names.length);
        // System.out.println(names[1]);
        // for(int i=0;i<3;i++){
        //     System.out.print(names[i]+" ");
        // }
        for(float element: marks){
            System.out.println(element);
        }
    }
}
