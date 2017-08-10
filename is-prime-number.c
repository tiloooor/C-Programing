#include <stdio.h>

int main() {

  int num,i;
  scanf("%d", &num); // Pointer points directly to value

  if(num == 1)
  {
    printf("This is not a prime number..");
  }

  for(i = 2; i < num; i++)
  {
    if(num % i == 0) {
      printf("This is not a prime number");
      break; // break outside of the loop
    }
  }

  if(num == i) {
    printf("This is a prime number");
  }

}
