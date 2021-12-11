#include <stdio.h>

// void doubleIterate(int i, int dashLimit, int array[12])
// {
//   for (int k = 0; k < i; k++)
//   {
//     // printf("%d ", arr[arrCount]);
//     if (i < 1)
//     {
//       //  printf("X");
//       printf("%d", array[dashLimit]);
//       printf("\n");
//     }
//     else
//     {
//       printf("_ ");
//     }

//     // arrCount += 1;
//   }
//   //  printf("X");
//   printf("%d", dashLimit);
//   dashLimit = dashLimit + 1;
//   printf("\n");
// }
int main()
{
  int array[12] = {33, 55, 66, 77, 44, 33, 22, 4, 6, 6, 7, 7};
  int count = 5;
  int dashLimit = 0;
  for (int i = 0; i < count; i++)
  {
    
    for (int k = 0; k < i; k++)
    {
    
      if (i < 1)
      {
        printf("X");
      }
      else
      {
        printf("_ ");
      }
      dashLimit += 1;
    }
    printf("X");
     printf("\n");
  }
 
}