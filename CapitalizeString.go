package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	var word string
	fmt.Println("Enter a Word: ")
	fmt.Scanln(&word)
	
	cap(word)
}

func cap(word string){
	k := utf8.RuneCountInString(word)
	for i := 0; i <= k - 1; i++ {
		fmt.Print(string(word[i] - 32))
	}
	return 
}
