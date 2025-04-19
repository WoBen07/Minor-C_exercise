#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        char random;
        srand(time(NULL));
        random = rand() % 128;
        if ((random < 97) || (random > 122))
        {
                printf("Das Zeichen %c ist kein lateinischer Kleinbuchstabe", random);
        }
        
        return 0;
}