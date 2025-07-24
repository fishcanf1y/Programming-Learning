package main

import (
	"fmt"
)

func main() {
	// %d 表示整型数字，%s 表示字符串
	var stockcode = 123
	var enddate = "2025-07-11"
	var url = "Code=%d&endDate=%s"
	var target_url = fmt.Sprintf(url, stockcode, enddate)
	fmt.Println(target_url)
}
