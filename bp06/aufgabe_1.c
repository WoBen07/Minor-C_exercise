#include <stdio.h>
#include <string.h>
#define MIN 3
#define MAX 5

int read_string(char input[]);
void flush();
int count_string(char w[], char c);

int main (void)
{
        char w[MAX];
        int ex = 0, ques = 0;
        printf("Das Programm erwartet eine Zeichenkette der Länge %i-%i. Sofern es eine gültige Zeichenkette ist, werden die Ausrufe-"
        "und Fragezeichen gezählt und ausgegeben. Dies geschieht bis die Benutzereingabe 'exit' geschieht.", MIN, MAX);
        do
        {
                ex = 0;
                ques = 0;
                printf("\nBitte geben Sie eine Zeichenkette ein:\n");
                if (read_string(w) == 1 && strcmp(w, "exit") != 0)
                {
                        ex = count_string(w, '!');
                        ques = count_string(w, '?');
                        printf("Ausrufezeichen: %i \nFragezeichen: %i\n", ex, ques);
                }else if(strcmp(w, "exit") != 0) {
                        printf("Ungueltige Eingabe\n");
                        continue;
                }else {
                        printf("Ausfuehrung durch den User beendet");
                        break;
                }
                
        } while (strcmp(w, "exit") != 0);
        
        return 0;
}

void flush()
{
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
        {
                /* code */
        }
        
}

int read_string(char input[])
{
        int i, count = 0;
        scanf("%s", input);
        for (i = 0; input[i] != '\0'; i++)
        {
                count++;
        }
        if (count < MIN || count > MAX)
        {
                flush();
                return 0;
        }
        return 1;
        
}

int count_string(char w[], char c)
{
        int i, sum = 0;
        for (i = 0; w[i] != '\0'; i++)
        {
                
                if (w[i] == c)
                {
                        sum++;
                }
                
        }
        return sum;
}