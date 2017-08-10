#include <stdio.h>

int main()
{
  int a, b, result = 0;
  char choice;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter operator: ");
  scanf("%c", &choice);
  printf("Enter second number: ");
  scanf("%d", &b);

  switch (choice) {
    case '+':
      result = a + b;
      printf("Sum: %d", result);
    break;
    case '-':
      result = a - b;
      printf("Difference: %d", result);
    break;
    case '*':
      result = a * b;
      printf("Product: %d", result);
    break;
    case '/':
      result = a / b;
      printf("Quotient: %d", result);
    break;
    default:
      printf("enter a valid number");
  }

}
