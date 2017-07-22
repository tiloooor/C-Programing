#include <stdio.h>

void findSum(int a, int b) {
  int sum = a + b;
  printf("Sum = %d\n", sum);
}

int main() {

  // Two placeholders for user-inputted values
  int x, y;

  printf("Enter value 1: \n");
  scanf("%d", &x);

  printf("Enter value 2: \n");
  scanf("%d", &y);

  findSum(x,y);

}
