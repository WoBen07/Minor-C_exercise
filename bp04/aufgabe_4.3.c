#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_SIZE 10

void matrix_init(int m[][MAX_SIZE], int n);
void matrix_print(int m[][MAX_SIZE], int n);
void matrix_add(int m1[][MAX_SIZE], int m2[][MAX_SIZE], int n);
void matrix_mult(int m1[][MAX_SIZE], int m2[][MAX_SIZE], int n);

int main(void)
{
        int m1[MAX_SIZE][MAX_SIZE];
        int m2[MAX_SIZE][MAX_SIZE];
        srand(time(NULL));
        matrix_init(m1, 5);
        
        matrix_print(m1, 5);
        matrix_init(m2, 5);
        printf("\n");
        matrix_print(m2, 5);
        printf("\n\n");

        matrix_mult(m1, m2, 5);
        matrix_print(m1, 5);
        return 0;
}

void matrix_init(int m[][MAX_SIZE], int n)
{
        int i, j;
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        m[i][j] = (rand() % 11);
                }
                
        }
        
}

void matrix_print(int m[][MAX_SIZE], int n)
{
        int i, j;
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        printf("%i\t", m[i][j]);
                }
                printf("\n");
        }
}

void matrix_add(int m1[][MAX_SIZE], int m2[][MAX_SIZE], int n)
{
        int i, j;
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        m1[i][j] = m1[i][j] + m2[i][j];
                }
                
        }
}

void matrix_mult(int m1[][MAX_SIZE], int m2[][MAX_SIZE], int n)
{
        int i, j, k;
        int m3[MAX_SIZE][MAX_SIZE];
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        m3[i][j] = 0;
                        for (k = 0; k < n; k++)
                        {
                                m3[i][j] += m1[i][k] * m2[k][j];
                        }
                        
                }
                
        }
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        m1[i][j] = m3[i][j];
                }
                
        }
        
}