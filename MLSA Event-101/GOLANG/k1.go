/*Creating pointers
Dereferencing pointers: using pointers to get some underlying data
The new func
Working with nil
Types with internal pointers
*/

package main

import "fmt"

func main() {
	a := 42
	b := a //copy whatever is in a to be, so its not pointing to the same data
	fmt.Println(a, b)
	a = 100
	fmt.Println(a, b)
}
