package main

import "fmt"

func main() {
	var a int = 42
	var b *int = &a //Declaring as a pointer: Precede the type that u r pointing to with an aterisk + use AddressOf operator
	//Now b is now not holding the value but the memory location of A
	fmt.Println(&a, b)
	fmt.Println(a, *b) //Deferencing Operator(*)--> Drill through the pointer, find memory location and pull back the value
	a = 100
	fmt.Println(a, *b)
	*b = 14
	fmt.Println(a, *b)
}
