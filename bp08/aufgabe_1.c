#include <stdio.h>
#include <math.h>

int calc_square(int x);
void squared(int *x);

int main(void)
{
        int norm = 4;
        printf("Zahl vorher: %i\n", norm);
        printf("Calc_Square: %i\n", calc_square(norm));
        printf("Zahl nachher: %i\n", norm);
        printf("Jetzt mit Pointer:\n");
        printf("Zahl vorher: %i\n", norm);
        squared(&norm);
        printf("Zahl nachher: %i\n", norm);
        
        return 0;
}

int calc_square(int x)
{
        return (pow(x,2));
}

void squared(int *x)
{
        *x = pow(*x, 2);
}

/*Funktion 1 ändert nicht den Wert der in der Variable gespeichert ist sondern gibt per Call-by-Value Prinzip den potenzierten Wert
zurück. Funktion 2 ändert den Wert der in der Variable gespeichert ist direkt, deswegen ist auch keine Rückgabe notwendig.*/