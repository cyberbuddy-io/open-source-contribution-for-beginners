import random

a=random.randint(1,101)

print("let's start game. press enter")
print("you have only 5 chances to win the game")

b=int(input("enter the 1 no.- "))

if(b>a):
    print("the no. you entered is greater the required no.")
elif(b<a):
    print("the no. you entered is less thanthe required no. ")
elif(b==a):
    print("you chooses the right no.")

c=int(input("enter the 2 no.- "))

if(c>a):
    print("the no. you entered is greater the required no.")
elif(c<a):
    print("the no. you entered is less thanthe required no. ")
elif(c==a):
    print("you chooses the right no.")

d=int(input("enter the 1 no.- "))

if(d>a):
    print("the no. you entered is greater the required no.")
elif(d<a):
    print("the no. you entered is less thanthe required no. ")
elif(d==a):
    print("you chooses the right no.")

e=int(input("enter the 1 no.- "))

if(e>a):
    print("the no. you entered is greater the required no.")
elif(e<a):
    print("the no. you entered is less thanthe required no. ")
elif(e==a):
    print("you chooses the right no.")

f=int(input("enter the 1 no.- "))

if(f>a):
    print("the no. you entered is greater the required no. you lost the game ")
elif(f<a):
    print("the no. you entered is less thanthe required no. you lost the game ")
elif(f==a):
    print("you chooses the right no.")



