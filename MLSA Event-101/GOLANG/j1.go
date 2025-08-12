// Defer Functions: How we invoke a func but delay its execution to some future pt. in time

package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"net/http"
)

func main() {
	res, err := http.Get("http://www.google.com/robots.txt")

	//Get func from HTTP package: To request robots.txt file from google.com
	if err != nil {
		log.Fatal(err)
	}
	//We'll get a response and an optional error If err ==nil , we'll log out and exit our application if err!= nil we got a good response
	defer res.Body.Close()
	//So we close the body of response to let web request know that we're done working with it
	robots, err := ioutil.ReadAll(res.Body)
	//Then we use ReadAll from ioutil package : it'll take in a stream and that'll parse that out to a string of bytes for u to work with
	if err != nil {
		log.Fatal(err)
	}
	//Read operation can fail so we are checking that error
	fmt.Printf("%s", robots)

	//Program that make some resource requests through HTTP package
	//Defer allows you to associate the  opening of a resource and the closing
	//of the resource right next to each other

}
