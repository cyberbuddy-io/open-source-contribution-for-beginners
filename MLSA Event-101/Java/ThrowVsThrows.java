class NegativeRadiusException extends Exception {
    public String toString() {
        return "Radius cannot be negative!";
    }
}

class ThrowVsThrows {
    public static int divide(int a, int b) throws ArithmeticException {
        int result = a / b;
        return result;
    }

    public static double area(int r) throws NegativeArraySizeException {
        if (r < 0) {
            throw new NegativeArraySizeException();
        }
        double result = Math.PI * r * r;
        return result;
    }

    public static void main(String[] args) {
        System.out.println("Welcome to Throw and Throws tutotial !!");
        try {

            int c = divide(6, 0);
            System.out.println(c);
        } catch (Exception e) {
            System.out.println("Arithmetic exception !!");
            System.out.println(e);
        }
        try {
            System.out.println(area(-1));
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}