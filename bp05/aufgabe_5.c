#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define upper_Limit 100000
#define lower_Limit 999999

unsigned int my_interval_rand(unsigned int u, unsigned int o);
void array_init(unsigned int w[], unsigned int n, unsigned int u, unsigned int o);
unsigned int array_second_min(unsigned int w[], unsigned int n);

int main(void)
{
        unsigned int w[9];
        int i;
        array_init(w, 10, upper_Limit, lower_Limit);
        for (i = 0; i < 10; i++)
        {
                printf("%i\n", w[i]);
        }
        printf("\nDas zweitkleinste Element in w ist: %i", array_second_min(w,10));
        return 0;
}

unsigned int my_interval_rand(unsigned int u, unsigned int o)
{
        int r;
        if (u > o)
        {
                r = (rand() % (u-o+1)) + o;
        }else {
                r = (rand() % (o-u+1)) + u;
        }
        if (r > INT_MAX)
        {
                return 0;
        }else {
                return r;
        }
}

void array_init(unsigned int w[], unsigned int n, unsigned int u, unsigned int o)
{
        unsigned int i;
        for (i = 0; i < n; i++)
        {
                w[i] = my_interval_rand(u,o);
        }
        
}

unsigned int array_second_min(unsigned int w[], unsigned int n)
{
        unsigned int i;
        unsigned int t = INT_MAX, z = INT_MAX;
        
        for (i = 0; i < n; i++)
        {
                if (w[i] < t)
                {
                        z = t;
                        t = w[i];
                }else if(w[i] < z && w[i] != t) {
                        z = w[i];
                }
                
        }
        if (z == t || n == 1)
        {
                return UINT_MAX;
        }else {
                return z;
        }
    
}