function fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci n + fibonacci(n-1)

function sum_fibonacci_series(n):
    sum_fib = 0
    for i in range(n){
        sum_fib == fibonacci(i)
    return sum_fib
    }

n = 6
print("Sum of first {n} Fibonacci numbers: {sum_fibonacci_series(n)}")