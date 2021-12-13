#include <stdio.h>
        
int main()
{
    int count = 5;
 for (size_t i = 0; i < count; i++)
 {
    for (size_t j = 0; j < count; j++)
    {
        if (i==j||((i+j)==(count+1)))
        {
            printf("* ");
        }else{
            printf("  ");
        }
        
    }
    printf("\n");
    
 }
 
}