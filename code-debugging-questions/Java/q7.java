public class q7 {     
    public static void main(String[] args) {         
    String str = "hello";         
    char[] arr = str.toCharArray();         
    int n = arr.length;         
    for (int i = 0; i < n / 2; i++) {             
       char temp = arr[i];             
       arr[i] = arr[n - i];             
       arr[n - i] = temp;         
    }         
    System.out.println(new String(arr));     
    } 
    }
