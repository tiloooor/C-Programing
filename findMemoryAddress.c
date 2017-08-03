#include <stdio.h>

int main() {

  int val = 30;

  int *pointer_p;
  pointer_p = &val;

  // Must use a hexadecimal number to display the address
  printf("The address of val is: %x \n", &val);
  printf("The address of val is %x \n", &val);
}
