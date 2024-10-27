public class q1 {
    public static void main(String[] args) {
        int ch = 65;
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                System.out.print("  ");
            }
            for (int k = 0; k < i; k++) {
                System.out.print(" " + (char)ch++ + " ");
            }
            
        }
    }
}
