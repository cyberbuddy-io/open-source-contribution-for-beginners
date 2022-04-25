package main

import "fmt"

func main() {
	a := "start"
	defer fmt.Println(a)
	a = "end"
}

//The reason it prints START is that when u defer a function it
//actually takes the argument at the
//time when defer is called and not when it is executed
