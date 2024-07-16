m = []
n = int(input("Enter how many numbers to sort: "))

# Input the numbers
for i in range(n):
    a = int(input("Enter number: "))
    m.append(a)

# Bubble Sort Algorithm
for i in range(n):
    for j in range(0, n - i - 1):
        if m[j] > m[j + 1]:
            # Swap if the element found is greater than the next element
            m[j], m[j + 1] = m[j + 1], m[j]

# Print sorted numbers
print("Sorted numbers:")
for number in m:
    print(number)

