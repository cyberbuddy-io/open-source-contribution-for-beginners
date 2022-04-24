//Functions can be passed out as variables
//Can be passed into func as arguments

package main

import "fmt"

func main() {
	f := func() { //OR  var f func()=func()
		fmt.Println("Hey")

		msg := "This is an anonymous func"
		msg1 := "When to use it?"
		msg2 := "No idea"
		fmt.Println(msg, msg1, msg2)
	}
	f() //Now this "f" function is free to pass around in the application
}
