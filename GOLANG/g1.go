/*
MAPS : What r they? Creating. MAnipulation
Structs: ,,          ,,   Naming Convention, Embedding, Tags
*/

package main

import (
	"fmt"
)

func main() {
	//METHOD 1 to make a map
	statePopulations := map[string]int{
		/*Keyword map + [Key value Type] <Value Type>
		  i.e. all keys should be of String type and all value
		  should be of int type*/
		"California":   39250017,
		"Texas":        27862596,
		"Florida":      20612439,
		"New york":     19745289,
		"Pennsylvania": 12802503,
		"Illinois":     12801539,
		"Ohio":         11614373,
	}
	fmt.Println(statePopulations)
	//A slice cannot be a key to a map
	//Boolean,strings, pointers, interfaces, structs, arrays, channels can be

	//METHOD 2 using built-in make function
	StatePopulations := make(map[string]int)
	StatePopulations = map[string]int{

		"California":   39250017,
		"Texas":        27862596,
		"Florida":      20612439,
		"New york":     19745289,
		"Pennsylvania": 12802503,
		"Illinois":     12801539,
		"Ohio":         11614373,
	}

	fmt.Println(StatePopulations)
	fmt.Println(StatePopulations["Texas"]) // printing value of 1 specific variable in the set
	StatePopulations["Georgia"] = 10310371 //Adding an element to the existing set of variables
	fmt.Println(StatePopulations["Georgia"])
	fmt.Println(StatePopulations)
	delete(StatePopulations, "Georgia") //deleting an element
	fmt.Println(StatePopulations)
}
