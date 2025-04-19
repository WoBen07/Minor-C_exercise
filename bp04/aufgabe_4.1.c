#include <stdio.h>

int main(void)
{
        int col, row, count, i, j;
        row = 5;
        count = 1;
        for (i = 0; i < row; i++)
        {
                printf("%i\t",count);
                col = count;
                for (j = 1; j < row; j++)
                {
                        col = col + 5;
                        printf("%i\t", col);
                }
                printf("\n");
                count++;
        }
        
        return 0;
}