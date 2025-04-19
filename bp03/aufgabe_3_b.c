#include <stdio.h>

double power3(int n);

int main(void)
{
        int i;
        for (i = 0; i < 13; i++)
        {
                printf("%f\n", power3(i));
        }
        
        
        return 0;
}

double power3(int n)
{
        int i;
        double result = 3;
        for (i = 1; i < n; i++)
        {
                result = 3 * result;
        }
        return result;
}