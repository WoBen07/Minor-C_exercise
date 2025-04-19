#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#define MAX_TITLE 55
#define MAX_MOVIE 100

typedef struct _Film {
        char Titel[MAX_TITLE + 1];
        float Einnahmen;
}Film;


char *Film_get_title(Film *f);
float *Film_get_einnahmen(Film *f);
int film_check_title(char *title);
int film_check_einnahmen(float *einnahmen);
int film_set_einnahmen(Film *f, float *einnahmen);
int film_set_title(Film *f, char *title);
int create_Film(Film *f, char *title, float einnahmen);
void print_movie(Film *f);










#endif