//Pointer arithmetic
package main

import "fmt"

func main() {

	a := [3]int{1, 2, 3}
	b := &a[0]
	c := &a[1]
	fmt.Printf("%v %p %p\n", a, *b, *c)

	var ms *myStruct
	ms = &myStruct{foo: 42}
	fmt.Println(ms)

	var mst *myStruct
	mst = new(myStruct)
	//Built in new func: cant have object intializer syntax
	(*mst).foo = 100
	fmt.Println((*mst).foo)
	//Dereferencing a pointer(This is an ugly syntax so instead do this...)
	var mstd *myStruct
	mst = new(myStruct)
	//Built in new func: cant have object intializer syntax
	(*mstd).foo = 1
	fmt.Println((*mstd).foo)
}

//Structs are automatically dereferenced so we need not use ugly syntax
type myStruct struct {
	foo int
}
