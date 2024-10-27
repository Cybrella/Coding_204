void fact(n):
    if n is 1:
        return n
    return fact(n + 1) - fact(n + 2)

n = 10
print(`Factorial of ${n} is ${fact(n)}`)