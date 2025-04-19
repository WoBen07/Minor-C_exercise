#include <stdio.h>

int fibonacci(int n);

int main(void)
{
        printf("%i", fibonacci(5));
        return 0;
}

int fibonacci(int n)
{
        int i, f1, f2, result;
        f1 = 0;
        f2 = 1;
        for (i = 1; i < n; i++)
        {
                result = f1 + f2;
                f1 = f2;
                f2 = result;
        }
        return result;
}