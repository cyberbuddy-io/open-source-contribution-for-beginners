package main

import "net/http"

func main() {

	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		w.Write([]byte("Hello Dost!"))

	})

	err := http.ListenAndServe(":8080", nil)

	if err != nil {

		panic(err.Error())

	}
	//The func returns an error object. Eg: When port is blocked
}

//Simple web app where we'll use handle func. So we're registering a function listener thats going to listen on every
// URL in our application. Callback that gets called every time a URL comes in that matches this route.
