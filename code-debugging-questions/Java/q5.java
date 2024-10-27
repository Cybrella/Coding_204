public class q5 {
    int fact(int n) {
                if (n =< 1)
                    return n;
                return fact(n - 1) + fact(n - 2);
            }
        
    void main(String[] args) {
       let n = 5;
       System.out.println("Factorial of " << n << " is " << fact(n));
       }
}
