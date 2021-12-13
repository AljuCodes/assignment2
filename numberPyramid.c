#include <stdio.h>
int main()
{
    int ivsp = 5;
    size_t n=1;
    // for (size_t i = 1; i <= count; i++)
    // {
    //     for (size_t j = 0; j <= count; j++)
    //     {
    //         if (i == j||j==1||i==1||j<=ivsp)
    //         {
    //              printf("* ");
    //         }
    //     }
    //     ivsp--;
    //    printf("%d",i);
    //         printf("\n");

    // }
    for (size_t i = 1,k = 1; i <= 5; i++,k=k+2)
    {
        for (size_t j = 1; j <= ivsp; j++)
        {
            printf("* ");
        }
        ivsp--;
       
  
        for ( n = 1; n <=k; n++)
        {
            if (n == k||n==i||n>i)
            {
                printf("%d ", n);
            }

        }
        int a =1;
        for (size_t b = n-2; b < a; b++)
        {
           
            printf("%d ", b);
               
        }
        a++;
         printf("\n");
    
    } 
}
