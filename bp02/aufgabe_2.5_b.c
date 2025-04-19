#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
        int n, i, zw;
        srand(time(NULL));
        n = rand() % 15;
        zw = 1;
        for (i = 0; i <= n; i++)
        {
                zw = zw *3;
                printf("\n%i", zw);
                
        }
        
        
        return 0;
} 