#include <stdio.h>

int main(){
  unsigned int x = 3333333333;
  char *p = &x;
  printf("This is the value of x in hex: %x\n",x);
  printf("Here are each individual bytes of your int: %hhx\n",*p);
  (*p)++;
  printf("number of bytes: %hxx\n", *p);
  printf("hex: %x\n", x);
  printf("dec: %d\n", x);
  (*p) += 16;
  printf("number of bytes: %hxx\n", *p);
  printf("hex: %x\n", x);
  printf("dec: %d\n", x);
}
