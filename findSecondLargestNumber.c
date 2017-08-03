#include <stdio.h>

int main() {

  int myNumArray[4] = {1, 2 ,7, 45};

  // Set the first as the largest
  int largest1 = myNumArray[0];
  int largest2 = myNumArray[1];
  int temp;

  // Check if the first element in the array is actually the largest
  if (largest1 < largest2) {

    temp = largest1;
    largest1 = largest2;
    largest2 = temp;

  }

  for(int i = 0; i < 4; i++) {
    if (myNumArray[i] >= largest1) {

      largest2 = largest1;
      largest1 =myNumArray[1];

    } else {
      largest2 = myNumArray[1];
    }
  }

  printf("First largest: %d \n Second largest: %d", largest1, largest2);

}
