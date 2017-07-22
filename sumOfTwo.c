#include <stdio.h>

void Sum(int a, int b);
int main() {

  // Call the function, sum
  Sum(60, 50);

}

// Void: Don't want the function to return anything
void Sum(int a, int b) {

  int sum = a + b;
  printf("The sum is: %d\n", sum);

}
