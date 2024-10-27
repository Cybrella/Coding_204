#include <stdio.h>  
int main() 
{     
 int arr[] = {1, 2, 3, 4, 5};   
int arrlength = sizeof(arr)/size(arr[0]);  
int sum = 0;     
 for (int i = 0; i <= arrlength; i++) 
	 {         
		 sum += arr[i];     
	 }     
printf("Sum: %d\n", sum);     
return 0; 
}