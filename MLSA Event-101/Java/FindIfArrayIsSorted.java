public class FindIfArrayIsSorted {
    public static void main(String[] args) {
        int[] a = { 34, 425, 76, 78, 99 };
        int c = 0;
        for (int i = 1; i < a.length; i++) {
            if (a[i - 1] < a[i]) {
                continue;
            } else {
                c += 1;
            }
        }
        if (c != 0) {
            System.out.println("Not sorted !!");
        } else {
            System.out.println("Sorted !!");
        }
    }
}
