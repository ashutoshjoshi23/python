#                                        ******SBI BANKING SYSTEM********
balance = 1500

# Input amount and operation choice
amt = int(input("Enter amount: "))
op = input("Enter 'D' for deposit or 'W' for withdrawal: ").upper()

# Perform the operation based on user input
if op == "D":
    balance += amt  # Deposit
    print("Deposit successful. Balance:", balance)
elif op == "W":
    if amt > balance:
        print("Insufficient balance. Withdrawal not possible.")
    else:
        balance -= amt  # Withdrawal
        print("Withdrawal successful. Balance:", balance)
else:
    print("Invalid operation. Please enter 'D' for deposit or 'W' for withdrawal.")

