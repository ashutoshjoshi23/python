def main():
    # Initialize an empty list to store marks
    marks = []

    # Number of students
    num_students = int(input("Enter the number of students: "))

    # Input marks for each student
    for i in range(1, num_students + 1):
        while True:
            try:
                mark = float(input(f"Enter marks for student {i}: "))
                if mark < 0 or mark > 100:
                    print("Marks should be between 0 and 100. Please try again.")
                else:
                    marks.append(mark)
                    break
            except ValueError:
                print("Invalid input. Please enter a valid number.")

    # Calculate the average, minimum, and maximum marks
    if len(marks) > 0:
        average_marks = sum(marks) / len(marks)
        min_marks = min(marks)
        max_marks = max(marks)
        
        print(f"\nAverage marks of all students: {average_marks:.2f}")
        print(f"Minimum marks: {min_marks}")
        print(f"Maximum marks: {max_marks}")

        # Calculate frequency of each mark
        mark_freq = {}
        for mark in marks:
            if mark in mark_freq:
                mark_freq[mark] += 1
            else:
                mark_freq[mark] = 1
        
        print("\nFrequency of each mark:")
        for mark in sorted(mark_freq.keys()):
            print(f"{mark}: {mark_freq[mark]}")
    else:
        print("No marks entered.")

if __name__ == "__main__":
    main()

