#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "hello";
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i];  
        str[n - i] = temp;   
    }
    cout << str << endl;  
    return 0;
}
