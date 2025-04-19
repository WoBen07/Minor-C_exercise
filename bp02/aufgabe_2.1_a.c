#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int random;
        srand(time(NULL));
        random = rand() % 2000;
        if (random < 1000 && random > 99)
        {
                printf("Die Zahl %i ist dreistellig", random);
        }else {
                printf("Die Zahl %i ist NICHT dreistellig", random);
        }
        
        return 0;
}