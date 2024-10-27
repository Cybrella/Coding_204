
for i in range(n):
    for j in range(i, n):
        print(" * ", end=" ")
    for k in range(i):
        print(f" {chr(ch)} ", end=" ")
    print()  