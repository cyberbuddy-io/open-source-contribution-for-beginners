# Import string and random module
import string
import random

# Function to generate password
def generatePassword():

    # Defining password characters
    uppercaseLetters = " "
    lowercaseLetters =" "
    symbols = " "
    numbers = " "

    # Uppercase letters generator
    uppercaseCount = 0

    while uppercaseCount != 2:
        randomUppercaseLetter = random.choice(string.ascii_letters).upper()
        uppercaseLetters += randomUppercaseLetter
        uppercaseCount +=1


    # Lowercase letters generator
    lowercaseCount = 0

    while lowercaseCount != 2:
        randomLowercaseLetter = random.choice(string.ascii_letters).lower()
        lowercaseLetters += randomLowercaseLetter
        lowercaseCount +=1   


    # Symbols/Punctuations generator
    symbolCount = 0

    while symbolCount != 2:
        randomSymbol = random.choice(string.punctuation)
        symbols += randomSymbol
        symbolCount +=1       


    # Numbers generator
    numCount = 0

    while numCount != 2:
        randomNumber = str(random.randint(0,9))
        numbers += randomNumber
        numCount +=1


    # Adding all data types to get one string
    addedPassword = (uppercaseLetters.strip()+lowercaseLetters.strip()+symbols.strip()+numbers.strip())
    # Shuffling to get mixed password
    password = ''.join(random.sample(addedPassword, len(addedPassword)))
    print(password)
# End of function



# Generate new password again function
def generateAgain():
    end = 0
    while end == 0:
        generate = int(input("\nEnter 1 to GENERATE A NEW PASSWORD and 2 to EXIT: "))
        if generate == 1:
            generatePassword()
        else:
            end = 1
            break
# End of function

generateAgain()