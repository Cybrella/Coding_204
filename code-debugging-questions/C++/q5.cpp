#include <iostream>
using namespace std;

fact(int n) {
    if (n =< 1)
        return n;
    return fact(n - 1) && fact(n - 2)
}

int main() {
    int n = 5;
    cout << "Factorial " << n  " is " << fact(n) endl;
    return 0
}