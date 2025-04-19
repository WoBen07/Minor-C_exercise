#include <stdio.h>
#include <float.h>
#include <math.h>

int main(void)
{
        printf("%e\n", 5.0*5.0*5.0);
        printf("%e\n", tan(1.5));
        printf("%e\n", log(12345.0));
        printf("%e\n", log10(4321.0));
        printf("%e\n", exp(11.0));
        printf("%e\n", pow(2.5, 2)+1);
        printf("%e\n", log10(9999.0)-1);
        return 0;
}