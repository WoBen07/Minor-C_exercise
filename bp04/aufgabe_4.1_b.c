#include <stdio.h>

int main(void)
{
        int i, j, k, x, _;
        x = 11;
        _ = 0;
        for (i = 0; i < 6; i++)
        {
                for (j = 0; j < _; j++)
                {
                        printf(" ");
                }
                for (k = 0; k < x; k++)
                {
                        printf("x");
                }
                printf("\n");
                x = x - 2;
                _++;
                
        }
        
        return 0;
}