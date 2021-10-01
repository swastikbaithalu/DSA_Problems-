def bubbleSort(arr):
    b = len(arr) - 1
    for i in range(b):
        for j in range(b - i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


arr = [32, 5, 3, 6, 7, 54, 87]
bubbleSort(arr)
for i in range(len(arr)):
    print(arr[i], end=" ")
