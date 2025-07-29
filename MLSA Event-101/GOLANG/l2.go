/*Functions: Basic Syntax, Parameters, return values,
anonymous func, functions as typs, methods */
package main

import (
	"fmt"
)

func main() {

	greeting := "hi"
	n := "Raghav"
	greet(&greeting, &n)
	fmt.Println(n) //Value will change to Ted as we r passing Pointers as arguments
} //We can manipulate data like this

//Compiler infer that every varibale thats in comma delimited list has same type

func greet(greeting, n *string) {
	fmt.Println(*greeting, *n)
	*n = "Ted"
	fmt.Println(*n)
}
