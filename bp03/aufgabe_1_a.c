#include <stdio.h>

int main(void)
{
        int i, j;
        int x = 1;
        for (i = 0; i < 7; i++)
        {
                printf("\n");
                for (j = 0; j < 7; j++)
                {
                        printf("%i\t", x);
                        x++;
                }
                
        }
        
        return 0;
}