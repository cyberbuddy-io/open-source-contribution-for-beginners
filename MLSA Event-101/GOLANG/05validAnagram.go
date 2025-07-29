//https://leetcode.com/problems/valid-anagram/
package main

import (
	"fmt"
	"reflect"
	"strings"
)

func main() {
	fmt.Println("hn")
	fmt.Println(isAnagram("anagram", "nagaram"))

}
func isAnagram(s string, t string) bool {
	ans := false
	map1 := mapping(s)
	map2 := mapping(t)

	ans = reflect.DeepEqual(map1, map2)
	return ans
}

func mapping(s string) map[string]int {
	testByte := []byte(s)
	map1 := make(map[string]int)

	for i := 0; i < len(s); i++ {
		tempS := string(testByte[i])
		tempI := strings.Count(s, tempS)

		map1[tempS] = tempI
	}

	return map1

}
