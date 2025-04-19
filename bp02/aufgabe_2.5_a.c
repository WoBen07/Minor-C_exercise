#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
        int random, i;
        srand(time(NULL));
        random = rand() % 10;
        i = 0;
        while (i < random)
        {
                printf("%.3e ", sqrt(i));
                i++;
        }
        
        return 0;
}        