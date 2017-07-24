#include <stdio.h>

int main() {
  int MyNumbersArray[5] = {1, 4, 8, 2, 9};

  // Set the first as the largest
  int largest = MyNumbersArray[0];

  for(int i = 0; i < 5; i++) {
    if(largest < MyNumbersArray[i]) {
       largest = MyNumbersArray[i];

    }

  }

  printf("Largest number is: %d", largest);

}
