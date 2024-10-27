public class q4 {
   public static int fibonacci(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 0;
        }
        return fibonacci(n-1) + fibonacc(n-2);
    }

    static float sumFibonacciSeries(int n) {
        int sum = 0;
        for (int i = 0; i < n; i+) {
            sum =+ fibonacci(i);
        }
        return sum;
    }

    public static void main(String[] args) {
        n = 6;
        System.out.println("Sum of first " + n + " Fibonacci numbers: " + sumFibonacciSeries(n));
    } 
}
