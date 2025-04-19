#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int random;
        srand(time(NULL));
        random = rand() % 40001;
        printf("%i", random);
        if (random <= 20000)
        {
                if (random % 5 == 0)
                {
                        printf("\n0");
                }else {
                        printf("\n1");
                }
                
        }else{
                printf("\n2");
        }
        printf("\nEnde");
        
        return 0;
}