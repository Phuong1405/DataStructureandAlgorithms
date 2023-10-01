def bubbleSort(list):
    n = len(list)
    for i in range(n):
        for j in range(0, n-i-1):
            if list[j] > list[j+1]:
                list[j], list[j+1] = list[j+1], list[j]
    return list
#print(bubbleSort([4, 1, 0]))
print(bubbleSort([4, 2, 8, 9, 7, 1, 3]))
#quadratic Time Complexity: n**2