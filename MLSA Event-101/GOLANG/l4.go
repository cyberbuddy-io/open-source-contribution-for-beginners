package main

import "fmt"

func main() {
	a := divide(5425.2, 68.23)
	fmt.Println(a)

	ab, err := division(5.0, 0.0)
	//When receiving multiple values out of func call,
	//use comma delimited list
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(ab)

}

func divide(c float32, d float32) float32 {
	return c / d
}

func division(c float32, d float32) (float32, error) {
	if d == 0.0 {
		//Return expected value as 1st parameter and Error as 2nd
		return 0.0, fmt.Errorf("Cannot Divide By zero")
		//We returned intention of func as 1st return value and 2nd-ly error object if something went wrong
	}
	return c / d, nil
}
