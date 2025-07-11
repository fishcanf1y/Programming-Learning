// helloworld.go
package main

import (
	"./myMath"
	"fmt"
)

func main() {
	fmt.Println("Hello World!")
	fmt.Println(mathClass.Add(1, 1))
	fmt.Println(mathClass.Sub(1, 1))
}
