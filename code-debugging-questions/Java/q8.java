public class q8 {     
    public static void main(String[] args) {         
    int[] arr = {5, 3, 8, 4, 2};         
    int n = arr.length;         
    for (int i = 0; i < n; i++) {             
        for (int j = 0; j < n; j++) {                 
        if (arr[j] > arr[j + 1]) 
            {                       
                int temp = arr[j];                     
                arr[j] = arr[j + 1];                     
                arr[j + 1] = temp;                 
            }             
        }         
    }         
    for (int num : arr) {             
       System.out.print(num + " ");         
    }     
    } 
    }