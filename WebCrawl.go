package main

import (
	"fmt"
	"net/http"
	"io/ioutil"
)

func main() {
	url := "http://www.example.com/"
	
	resp, err := http.Get(url)     
	
	if err != nil {
		panic(err)
	}
	
	defer resp.Body.Close()
	
	html, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		panic(err)
	}
	
	fmt.Println(string(html))
}
