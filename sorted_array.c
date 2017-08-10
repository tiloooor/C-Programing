#include <stdio.h>

void sort_array();

//Global varibales
int array[50], size, item;

int main(void)
{

  int i = 0;

  // Take in the size of the array
  scanf("%d", &size);
  printf("%d", size);

  // Make an array of the user-inserted numbers
  for(i = 0; i < size; i++)
    scanf("%d", &array[i]);


  // Print initial array
  for(i = 0; i < size; i++)
    printf("%d", array[i]);

  // Enter item to insert
  scanf("%d", &item);
  printf("%d", item);

  sort_array();

  // Print the newly sorted array
  for(int i = 0; i < size; i++)
  {
    printf("%d", array[i]);
  }

}

void sort_array()
{

  int i = size - 1;

  while(item < array[i] && i >= 0)
  {
    array[i + 1] = array[i];

    // Why: now that we've shifted the elements to the right, we want to decrease i
    size--;
  }

  array[i + 1] = item;


  // Incrementing the size because after inserting the size of the array is incremented
  size++;

}
