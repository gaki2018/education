package main

import "fmt"

func judge(n int){
  if n % 3 == 0{
    fmt.Print("Fizz")
  }
  if n % 5 == 0{
    fmt.Print("Buzz")
  }
  if n % 3 != 0 && n % 5 != 0{
    fmt.Print(n)
  }
  fmt.Println()
}

func main(){
  for cnt := 1; cnt <= 100; cnt++{
    judge(cnt)
  }
}
