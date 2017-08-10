#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  int temp;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  printf("%d", a);
  printf("%d", b);
  printf("%d", c);

  temp = a;
  a = b;
  b = c;
  c = temp;

  printf("%d", a);
  printf("%d", b);
  printf("%d", c);

}
