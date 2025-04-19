#include <stdio.h>
#include <float.h>

int main(void)
{
        double max = DBL_MAX;
        printf("%f\n\n", max);
        max = max + max;
        printf("%f", max);
        return 0;
}

/* Eigentlich sollte ein Overflow zustande kommen, heißt der kleinstmögliche Double Wert hätte ausgegeben werden müssen.*/