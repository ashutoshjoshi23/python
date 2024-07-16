m = []
n = int(input("Enter how many numbers to sort: "))

# Input the numbers
for i in range(n):
    a = int(input("Enter number: "))
    m.append(a)

# Selection Sort Algorithm
for i in range(n - 1):
    min_index = i
    # Find the index of the minimum element in the unsorted part
    for j in range(i + 1, n):
        if m[j] < m[min_index]:
            min_index = j

    # Swap the found minimum element with the first element of the unsorted part
    if min_index != i:
        m[i], m[min_index] = m[min_index], m[i]

# Print sorted numbers
print("Sorted numbers:")
for number in m:
    print(number)

