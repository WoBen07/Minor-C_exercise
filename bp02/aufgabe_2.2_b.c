#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int random1, random2;
        srand(time(NULL));
        random1 = rand();
        random2 = rand();
        printf("%i\t ?\t %i\n", random1, random2);
        if (random1 < random2)
        {
                printf("%i", random1);
        }else {
                printf("%i", random2);
        }
        
        return 0;
}        