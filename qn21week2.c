#include <stdio.h>

int main()
{

  int array[27] = {
      33,
      55,
      66,
      77,
      44,
      33,
      22,
      42,
      64,
      66,
      77,
      77,
      66,
      77,
      44,
      33,
      22,
      88,
      99,
      78,
      45,
      90,
      55,
      43,
      24,
      42,
      42,
  };
  int size = (sizeof(array) / 4);
  printf("the size of array is : %d", size);
  printf("\n");
  int count = 50;
  int dashLimit = 0;
  int doublelimit = 2;
  for (int i = 0; i < count; i++)
  {
    if (dashLimit < size)
    {
      //for loop for dash normal iterable
      for (int k = 0; k < i; k++)
      {
        if (i < 1)
        {
          printf("X");
        }
        else
        {
          if (dashLimit < size)
          {
            printf("%d ", array[dashLimit]);
            dashLimit += 1;
          }
        }
      }
      printf("X");
      printf("\n");

      //for loop for adding two to even numbers for x

      for (int j = 0; j < doublelimit; j++)
      {
        if (dashLimit < size)
        {
          printf("X ");
        }
      }
      printf("\n");
      doublelimit += 2;
    }
  }
}