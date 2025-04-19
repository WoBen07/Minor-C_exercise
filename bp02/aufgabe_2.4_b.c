#include <stdio.h>
#include <float.h>

int main(void)
{
        double dbl = 2.5;
        int inti = 2.5;
        printf("%f" "%i", dbl, inti);
        printf("\n%f %i", dbl*5, inti*5);
        
        return 0;
}

/*Das Ergbenis des Integer ist um 2.5 kleiner, da die 0.5 nicht mit multipliziert wird, da Integer nur die Vorkommazahlen beachten*/