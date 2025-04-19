#include <stdio.h>

int russiche_bauern(int a, int b)
{
        int sum = 0;
        if (b & 1)
        {
                sum += a;
        }
        a = a << 1;
        b = b >> 1;
        if (b >= 1)
        {
                sum += russiche_bauern(a, b);
        }
        return sum;
}


int main(void)
{
        int sum = 0;
        int zahl1 = 42, zahl2 = 23;
        sum = russiche_bauern(zahl2, zahl1);
        printf("%i", sum);
        
        return 0;
}