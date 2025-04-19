#include <stdio.h>

int sum_even(int n, int m);

int main(void)
{
        printf("%i", sum_even(10, 4));
        return 0;
}


int sum_even(int n, int m)
{
        int i, j, result, x;;
        result = 0;
        if (n < m)
        {
                i = n;
                x = m - n;
        }else {
                i = m;
                x = n - m;
        }
        for (j = 0; j < x + 1; j++)
        {
                if (i % 2 == 0)
                {
                        result = result + i;
                }
                i++;
        }
        
        return result;
}