#include <iostream>
using namespace std;

int main() {
    int n, i, j, k;
    int ch = 97;
    
    for (i = 0; i < 4; i++) {
        for (j = i; j < 4; j++) {
            cout << " * ";
        }
        for (k = 0; k < i; k++) {
            cout << " " << (char)ch++ << " ";
        }
        cout << endl;
    }
    
    return 0;
}