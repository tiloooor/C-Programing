#include <stdio.h>

int main() {

  int MyNumbersArray[5] = {1, 2, 3, 4, 5};
  MyNumbersArray[1] = 60;

  // Print out each element in the array
  for(int i = 0; i<5; i++){
    printf("Element %d: %d\n", i, MyNumbersArray[i]);
  }

}
