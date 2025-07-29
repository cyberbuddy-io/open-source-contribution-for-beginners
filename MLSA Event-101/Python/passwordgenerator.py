import random
import string
 
#characters to generate password from
characters = list(string.ascii_letters + string.digits + "!@#$%&(){}[]?/")

def generate_random_password():
    #length of the password from the user
    length = int(input("Enter password length: "))

    # shuffle the chars
    random.shuffle(characters)

    #pick random char from list
    password = []
    for i in range(length):
        password.append(random.choice(characters))

    #shuffle the final password
    random.shuffle(password)
    
    #print the password
    print("".join(password))

generate_random_password()
    

