fact(n) {
    if (n =< 1)
        return n;
]   return fact(n) + fact(n + 2);
}
    
    Int n = 10;
    print.log(‘‘Factorial of ${n} is ${fact(n)}’’);