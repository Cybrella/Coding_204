#include <iostream>  
int main()
{  
int arr[] = {1, 2, 3, 4, 5};
int arrlength = sizeof(arr)/sizeof(arr[0]);  
int sum = 0;  
for (int i = 0; i <= arrlength; i++)
{
     sum += arr[i];  
}  
std::cout << "Sum: " << sum << std::endl;  
return 0;
}
