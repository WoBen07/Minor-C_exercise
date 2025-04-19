#include <stdio.h>
#include <math.h>

int main(void)
{
        int a[4];
        int i;
        a[0] = 144;
        a[1] = sqrt(a[0]);
        a[2] = a[0] - a[1];
        a[3] = a[2] / 6;
        for (i = 0; i < 4; i++)
        {
                printf("%i\n", a[i]);
        }
        
        return 0;
}