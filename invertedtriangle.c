#include <stdio.h>

int main()
{
    int count = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j==1||i==count|| i==j){
                printf("%d ", j);}
                else{
             printf("  ");
        }
        }
        

        printf("\n");
    }
}