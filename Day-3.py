# Learning Python

def main():
    print("Hello World!")
    print("Have a good day!")
    print("Learning Python")


    """This is used to do multi-line comments,
    while the "#" is used to do a single-line comment."""

    # The syntax for variable in Python is "VariableName = Value"

    name = "Bob"
    age = 25
    initial = 'B'
    bank_balance = 111.11
    pro_subscription = True

    print(f"Hey {name}, your bnak balance is {bank_balance}")

    deposit = 777.77

    total_balance = bank_balance + deposit

    print(total_balance)
    
    # declaring multiple variables
    x, y, z = 5, 6, 50
    print(x + y + z)

    # assigning the same value to multiple variables
    x = y = z = 50
    print(x + y + z)

if __name__== "__main__":
    main()