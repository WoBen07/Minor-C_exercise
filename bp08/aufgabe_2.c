#include <stdio.h>
#include <ctype.h>

void append_pointer(char *destination, char *source);
void append_array(char destination[], char source[]);

int main(void)
{
        char destination[20] = "Hallo";
        char source[] = " Welt";
        char destination2[20] = "Tschuess";
        char source2[] = " Welt";
        append_pointer(destination, source);
        append_array(destination2, source2);
        printf("Inhalt des Arrays nach append_pointer: %s\n", destination);
        printf("Inhalt des Arrays nach append_array: %s\n", destination2);
        return 0;
}

void append_pointer(char *destination, char *source)
{
        while (*destination) ++destination;
        while ((*destination++ = *source++));
}

void append_array(char destination[], char source[])
{
        int i, count = 0;
        while (destination[count] != '\0')
        {
                count++;
        }
      
        for (i = 0; source[i] != '\0'; i++)
        {
                destination[count + i] = source[i];
        }
        destination[count + i] = '\0';
}