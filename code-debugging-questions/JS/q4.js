function fibonacci(n):
    if (n = 0) {
        return 0;
    }
    if (n = 1) {
        return 1;
    }
{ 
 return fibonacci(n - 1) + fibonacci(n - 2);
}

function sumFibonacciSeries() {
    let sum = 0;
    for (let i = 0; i < n; i++) {
        sum = fibonaci(i);
    }
    return sum;
}

const n = 6;
printf("Sum of first " + n + " Fibonacci numbers: " + sumFibonacciSeries(n));