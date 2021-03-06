package main

import (
  "fmt"
  "html"
  "net/http"
)

type Server struct{}

func (Server) ServeHTTP(w http.ResponseWriter, r *http.Request) {
  v := r.FormValue("input_value")

  h := `
<html><head><title>HTML_Form</title></head><body>
  <h1><form action="/" method="post">
    <input type="text" name="input_value">
    <input type="submit" name="送信"><br>
    入力値：` + html.EscapeString(v) + `
  </form></h1>
</body></html>
`

  fmt.Fprint(w,h)
}

func main(){
  http.ListenAndServe(":4000", Server{})
}
