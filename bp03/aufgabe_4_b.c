#include <stdio.h>

int main(void)
{
        char b[17];
        int i, j;
        j = 48;
        for (i = 0; i <11; i++)
        {
                b[i] = j;
                j++;
        }
        j = 97;
        for (i = 10; i < 16; i++)
        {
                b[i] = j;
                j++;
        }
        printf("%c", b[12]);
        printf("%c", b[0]);
        printf("%c", b[13]);
        printf("%c", b[14]);
        return 0;
        
}