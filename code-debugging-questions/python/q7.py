str = "hello"
n = len(str)
str_list = list(str)
for i in range(n // 2):
    temp = str_list[i]
    str_list[i] = str_list[n - i]
    str_list[n - i] = temp
str = "".join(str_list)
print(str)
