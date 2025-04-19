
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <errno.h>
#include "my_math.h"


double my_pow(double x, int y)
{
        int i;
        double result = 1.0;
        int count = (y < 0) ? -y : y;

        if (y == 0) {
                return 1.0;
        }

        if (y < 0 && x == 0) {
                errno = EDOM;
                return 0;
        }


        for (i = 0; i < count; i++) {
                if (MY_FABS(result * x) < DBL_MIN) {
                        errno = ERANGE;
                        return (y < 0 && x < 0) ? -0.0 : 0.0;
                }

                result *= x;
        }

        return (y < 0) ? 1.0 / result : result;


}

