#include <stdio.h>
#include <stdlib.h>

// Function that generates the sum of an array
int ArraySum(int MyArray[], int size) {
  // Placeholder for sum of array
  int sum  = 0;

  // Iterate through the array
  for(int i = 0; i < size; i++) {

    sum += MyArray[i];
  }

  return sum;

}

int main() {

  int YesArray[4] = {1, 2, 3, 4};
  printf("Array Sum = %d\n", ArraySum(YesArray, 4));

}
