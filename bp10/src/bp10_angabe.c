#include <stdio.h>
#include <stdlib.h>

unsigned int liesZahl();

unsigned int liesZahl()
{
	unsigned int zahl;
	int status, c;

	do {
		printf("Bitte eine nichtnegative ganze Zahl eingeben: ");
		status = scanf("%u", &zahl);
		if (status == EOF)
			exit(1);

		do {
			if ((c = getchar()) == EOF)
				exit(1);
		} while (c != '\n');
	} while (status != 1 && printf("Da hat etwas nicht funktioniert!\n"));

	return zahl;
}

unsigned long int multiply(unsigned int a, unsigned int b)
{
	int sum = 0;
        if (b & 1)
        {
                sum += a;
        }
        a = a << 1;
        b = b >> 1;
	printf("%i\t", a);
	printf("%i\n", b);
        if (b >= 1)
        {
                sum += multiply(a, b);
        }
        return sum;
}

int main(void)
{
	int a = liesZahl();
	int b = liesZahl();
	int sum;
	printf("Hier werden nach dem Schema russicher Bauern %i und %i miteinander multipliziert: \n", a,b);
	sum = multiply(a,b);
	printf("Produkt: %i", sum);
	return 0;
	
}
