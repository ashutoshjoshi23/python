def shellSort(arr):
    n = len(arr)
    d = n // 2

    while d > 0:
        for i in range(d, n):
            temp = arr[i]
            j = i
            while j >= d and arr[j - d] > temp:
                arr[j] = arr[j - d]
                j -= d
            arr[j] = temp
        d //= 2

print("\nShell Sort")
print("\nHow many numbers do you want to sort?")
n = int(input())

array = []
for i in range(n):
    print(f"\nEnter element {i + 1}: ")
    element = int(input())  
    array.append(element)

shellSort(array)

print("\nSorted array is:")
print(array)

