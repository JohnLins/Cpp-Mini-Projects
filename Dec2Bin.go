package main

import (
	"fmt"
)

func main() {
	dec := 36
	var bin [8]int
	
	for i := 0; i < len(bin); i++{
		bin[i] = (dec % 2)
		dec = dec / 2
	}
	
	fmt.Println(bin)
}
