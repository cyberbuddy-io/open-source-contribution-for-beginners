#Program to print the sequence 1,-4,7,-10,....,-40
a=input("Press enter to print the required sequence")
for i in range(1,15):
    j=((-1)**(i+1))*(1+(i-1)*3)
    print(j,end=' , ')
