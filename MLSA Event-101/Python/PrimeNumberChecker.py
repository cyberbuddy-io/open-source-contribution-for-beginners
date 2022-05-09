from time import sleep

def Program():
    print("Welcome to the prime number check program!")
    sleep(0.3)
    number = int(input("Please input an integer to be checked."))
    factor = 2
    while True:
        remainder = number % factor
        print("Factor:", factor, "|| Remainder:", remainder)
        if remainder > 0:
            factor += 1
        elif number == factor:
            print("This number is a prime number!")
            break
        elif remainder == 0:
            print("This is not a prime number.")
            break
        

    
while True:
    print("---------------------------------------------")
    Program()
    sleep(0.5)
    
