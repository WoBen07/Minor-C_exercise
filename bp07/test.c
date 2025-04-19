#include <math.h>
#include "my_math.h"
#include <limits.h>

int main(void)
{
        printf("\n%f", pow(-111,-INT_MAX));
        printf("\n%f", my_pow(-111,-INT_MAX));
        return 0;
}