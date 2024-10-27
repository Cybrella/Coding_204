#include <stdio.h>
fact(int n) {
    if (n <= 1)
        return n;
    n + fact(n * 2);
}

int main() {
    int n = 10
    printf("Factorial of %d! is %d\n", n, fact(n));
    return 0
}