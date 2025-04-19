#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void array_randneg(int a[], int size);
int array_isneg(int a[], int size);

int main(void)
{
        int a[4];
        array_randneg(a,4);
        printf("%i", a[3]);
        printf("\n%i", array_isneg(a,4));
        return 0;
}

void array_randneg(int a[], int size)
{
        int i;
        for (i = 0; i < size; i++)
        {
                a[i] = -rand();
        }
        
}

int array_isneg(int a[], int size)
{
        int i, count;
        count = 0;
        for (i = 0; i < size; i++)
        {
                if (a[i] < 0)
                {
                        count++;
                }else{
                        return 0;
                }
                
        }
        if (count == size)
        {
                return 1;
        }else{
                return 0;
        }
        
        
}