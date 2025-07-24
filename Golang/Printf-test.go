package main

import (
	"fmt"
)

func main() {
	var stockcode = 123
	var enddate = "2025-07-11"
	var url = "Code=%d&endDate=%s"
	fmt.Printf(url, stockcode, enddate)
}
