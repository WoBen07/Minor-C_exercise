#include <stdio.h>

int main(void)
{
        int i, j, count;
        char x = 43;
        for (i = 0; i < 10; i++)
        {
                count = 10 - i;
                for (j = 0; j < 10; j++)
                {
                        if (count > j)
                        {
                                printf(" ");
                        }else {
                                printf("%c", x);
                        }
                }
                printf("\n");
                
        }
        
        return 0;
}