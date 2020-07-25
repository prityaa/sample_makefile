#include <stdio.h>
#include <stdlib.h>
#include <hello.h>

int main() {
  // call a function in another file
  myPrintHelloMake();
  dbg("main\n");
  return(0);
}

