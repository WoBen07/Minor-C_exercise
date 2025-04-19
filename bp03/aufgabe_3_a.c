#include <stdio.h>

void print_alarm(int size);

int main(void)
{
        print_alarm(5);
        print_alarm(0);
        print_alarm(-5);
        return 0;
}

void print_alarm(int size)
{
        if (size < 0)
        {
                printf("Fehler");
        }else {
                int i;
                for (i = 0; i < size; i++)
                {
                        printf("%c", 7);
                        getchar();
                }
                
        }
        
}