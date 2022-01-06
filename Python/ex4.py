import math
print("Calculate the area and circumference of a circle")
a=float(input("Enter the radius of a circle "))
area= math.pi*a**2
circumference=2*a*math.pi
print("Area :",area)
print("Circumference :",round(circumference,2))