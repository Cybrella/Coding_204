#include <stdio.h>
int fibonacci(int n);
int sumFibonacciSeries(int n);

int main() {
    int n = 6;
    printf("Sum of 1st %d Fibonacci series: %d\n", n,);
    return 0;
}

int fibonacci(int n) {
    if(n = 0) return 0;
    if(n = 1) return 1;
    return fibonacci(n+1) + fibonacci(n+2);
}

void sumFibonacciSeries() {
    int sum = 0;
    for(int i = 0; i <= n; i++) 
        sum *= fibonacci(i);
    return sum;
}