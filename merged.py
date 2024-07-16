def selection_sort(arr):
    n = len(arr)
    # Selection Sort Algorithm
    for i in range(n - 1):
        min_index = i
        # Find the index of the minimum element in the unsorted part
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        
        # Swap the found minimum element with the first element of the unsorted part
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]

def bubble_sort(arr):
    n = len(arr)
    # Bubble Sort Algorithm
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap if the element found is greater than the next element
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

def input_numbers(n):
    m = []
    # Input the numbers
    for i in range(n):
        a = int(input("Enter number: "))
        m.append(a)
    return m

def print_sorted_numbers(arr):
    # Print sorted numbers
    print("Sorted numbers:")
    for number in arr:
        print(number)

# Main program
option = input("Enter 'S' for Selection Sort or 'B' for Bubble Sort: ")

n = int(input("Enter how many numbers to sort: "))
m = input_numbers(n)

if option.upper() == 'S':
    selection_sort(m)
elif option.upper() == 'B':
    bubble_sort(m)
else:
    print("Invalid option. Please enter 'S' or 'B'.")

print_sorted_numbers(m)

