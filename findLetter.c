#include <stdio.h>

int main() {

  // Create an array of characters
  char LetterArray[3] = {'a', 'b', 'c'};
  char newArray[2];

  for(int i = 0; i < 3; i++) {
    if(LetterArray[i] != 'a') {
      newArray[i] =+ LetterArray[i];
    }
  }

  // Print out new array
  for(int i = 0; i < 2; i++) {
    printf("Element[%c] = %c", i, newArray[i]);
  }

}
