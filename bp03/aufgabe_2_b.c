#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int my_tolower(int c);

int main(void)
{
        int c;
        srand(time(NULL));
        c = rand() % 128;
        printf("%i", c);
        printf("\n%i", my_tolower(c));
        return 0;
}

int my_tolower(int c)
{
        if (c >= 65 && c <= 90)
        {
                return c + 32;
        } else{
                return c;
        }
        
}