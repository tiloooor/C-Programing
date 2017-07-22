#include <stdio.h>

int Product(int a, int b){

  return a * b;

}

int main() {
    // Placeholders for two numbers that are going to passed through function
    int x, y;
    // Get first value
    scanf("%d", &x);
    // Get second value
    scanf("%d", &y);

    int prod = Product(x, y);

    printf("Product = %d\n", prod);

}
