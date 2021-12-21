package main

import "fmt"

func main() {
	g := greeter{
		greeting: "Hello",
		name:     "Dost",
	}
	g.greet()
	fmt.Println("Changed name ", g.name)
}

type greeter struct { //Structs with 2 fields: Greeting and Name
	greeting string
	name     string
}

func (g *greeter) greet() { //Method: A func thats providing a context that the func is executing in
	fmt.Println(g.greeting, g.name) //If we wanna get the underlying data make it a pointer using *
	g.name = "Arjun"
}

//We r getting the copy and not the struct itself
