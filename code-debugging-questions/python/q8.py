
arr = [5, 3, 8, 4, 2] 

n = len(arr)  

for i in range(n):     
    for j in range(n):  
        if arr[j] > arr[j + 1]:             
            temp = arr[j]             
            arr[j] = arr[j + 1]             
            arr[j + 1] = temp  
print(arr)
