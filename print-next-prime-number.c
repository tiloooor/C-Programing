#include <stdio.h>

int main()
{
  int i, j, num, nextNum;
  scanf("%d", &num);

  // For loop to keep dividing i by the numbers generated in j loop
  for(i = num; i < 3000; i++)
  {
    for(j = 2; j < i; j++)
    {
      if(i % j == 0)
      {
        break; // Means it's not a prime number if another one goes into it
      }
    }

      if((i == j) || (i == 1)){
        printf("%d", i);
        break;
      }
    }

}
