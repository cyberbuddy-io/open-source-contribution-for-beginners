
import turtle

t=turtle.Turtle()
s=turtle.Screen()
s.bgcolor('black')
t.speed(50)
colour=('red','green','blue','yellow','purple','white')
for i in range(302):
    turtle.color(colour[i%5])
    turtle.left(300)
    turtle.forward(i*2)
