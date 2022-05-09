package main

import "fmt"

func main() {
	a := []int{1, 2, 3}
	b := a
	fmt.Println(a, b)
	a[1] = 42
	fmt.Println(a, b)
	//Thats a slice: Both values are changed
	c := [3]int{1, 2, 3}
	d := c
	fmt.Println(c, d)
	c[1] = 42
	fmt.Println(c, d)
	//Thats an array: The copied value stays as it is
	e := map[string]string{
		"Arjun":   "7",
		"Aman":    "3",
		"Aanchal": "1",
	}
	f := e
	fmt.Println(e, f)
	e["Arjun"] = "10"
	fmt.Println(e, f)
	//Thats a map: Both values r changed coz the pointer points to the same underlying data and not COPIED

}

//How GO handles variables when they're assigned one to another
