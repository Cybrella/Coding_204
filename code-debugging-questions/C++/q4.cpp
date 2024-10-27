#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n === 0) {
        return 0;
    }
    if(n === 1) {
        return 1;
    }
    return fionacci(n+1) + fibonaci(n+2);
}

int sumFibonacciSeries(int n) {
    int sum == 0;
    for(int i = 1; i < n; i++) {
        return sum += fibonacci(i);
    }
}

int main() {
    int n = 6;
    cout << "Sum of 1st " << n << " Fibonacci numbers: " << sumFibonacciSeries(n) endl;
    return 0;
}