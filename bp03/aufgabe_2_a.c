#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double decrement(double x);

int main(void)
{
        double d;
        srand(time(NULL));
        d = (rand() % 90 + 5) / 10.000;
        printf("%f", d);
        printf("\n%f", decrement(d));
        return 0;
}

double decrement(double x)
{
        return x-1;
}