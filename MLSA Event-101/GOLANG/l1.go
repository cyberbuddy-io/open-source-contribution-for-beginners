/*Functions: Basic Syntax, Parameters, return values,
anonymous func, functions as typs, methods */
package main

import (
	"fmt"
)

func main() {
	printMssg("Hey Beautiful", "Stacy")

	for i := 0; i <= 2; i++ {
		sayMssg("hey gorgeous", i)
	}

	greeting := "hi"
	n := "Raghav"
	greet(greeting, n)
	fmt.Println(n) //Value wont change to Ted as both r independent copies and not the same data
	//Hence safe way to pass func as arguments

}

//Compiler infer that every varibale thats in comma delimited list has same type
func printMssg(msg, name string) {
	fmt.Println(msg, name)
}

func sayMssg(msg string, i int) {
	fmt.Println(msg)
	fmt.Println("Value of Index", i)
}

func greet(greeting, n string) {
	fmt.Println(greeting, n)
	n = "Ted"
	fmt.Println(n)
}
