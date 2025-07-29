/*Functions: Basic Syntax, Parameters, return values,
anonymous func, functions as typs, methods */
package main

import (
	"fmt"
)

func main() {

	sum("The Sum is ", 1, 2, 3, 4, 5)

	m := multiply(1, 2, 3, 4, 5, 6)
	fmt.Println("Multiplication is", m)

	a := add(1, 2, 3, 4, 5, 6)
	fmt.Println("Addition is", *a) //Dereference operation
}

//Variadic Paramter: only 1 for 1 func
func sum(sum string, values ...int) { //Wrap all the last same data-type-arguments in a slice
	fmt.Println(values)
	result := 0
	for _, v := range values {
		result += v
	}
	fmt.Println(sum, result)
}

func multiply(values ...int) int { //Wrap all the last same data-type-arguments in a slice
	fmt.Println(values)
	result := 1
	for _, v := range values {
		result *= v
	}
	return result
}

func add(values ...int) *int { //Ability to return local variable as a pointer
	fmt.Println(values)
	result := 1
	for _, v := range values {
		result += v
	}
	return &result //Returning address of a result
}
