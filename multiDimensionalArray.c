#include <stdio.h>

int main() {

  int MultidemsionalArray[2][3] = {

    {1, 2, 3}, // rows
    {3, 5, 8}  // columns

  };

  // Extract each array item: Need a for loop nested inside another
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j< 3; j++) {
      printf("Element[%d][%d] = %d\n", i, j, MultidemsionalArray[i][j]);
    }
  }


  int ThreeDimensions[3][3][3] = {
    {1, 2, 3},
    {3, 4, 5},
    {5, 6, 7}
  };

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        printf("Element[%d][%d][%d] = %d\n", i, j, k, ThreeDimensions[i][j][k]);
      }
    }
  }

}
