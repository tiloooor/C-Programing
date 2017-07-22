#include <stdio.h>

int main() {

  int grade = 69;

  // Tell the computer what expression will determine which statment is executed
  switch(grade) {
    // If the grade is 96 or 90 print out "Excellent!"
    case 96:
    case 90:
      printf("Excellent!\n");
      break;
    case 70:
      printf("Good job!\n");
      break;
    case 30:
      printf("There's room for improvement\n");
      break;
    default:
      printf("The grade could not be found!\n");
      break;
  }

}
