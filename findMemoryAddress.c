#include <stdio.h>

int main() {

  int val = 30;

  int *pointer_p;
  pointer_p = &val;

  // Must use a hexadecimal number to display the address
  printf("The address of val is: %x \n", &val);
  printf("The value of the pointer variable is:  %x \n", &val);
  printf("The value the pointer is: %d", *pointer_p);
}
